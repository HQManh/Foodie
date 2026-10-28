// rea decompile_all
// name: std::__ndk1::__num_get<char>::__stage2_float_prep
// address: 0x4003ca4
// body: available
// range: 0x4003ca4-0x4003e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4003e34 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__num_get<char>::__stage2_float_prep(std::__ndk1::ios_base&, char*, char&, char&) */

void __thiscall
std::__ndk1::__num_get<char>::__stage2_float_prep
          (__num_get<char> *this,ios_base *param_1,char *param_2,char *param_3,char *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_60;
  undefined1 *local_58;
  undefined1 ***local_50;
  undefined1 **local_48;
  
  ios_base::getloc();
  lVar2 = local_60;
  local_58 = ctype<char>::id;
  if (ctype<char>::id._0_8_ != -1) {
    local_48 = &local_58;
    local_50 = &local_48;
    __call_once((ulong *)ctype<char>::id,&local_50,FUN_0402d4a0);
  }
  lVar1 = *(long *)(lVar2 + 0x10);
  if (((long)(int)ctype<char>::id._8_4_ - 1U < (ulong)(*(long *)(lVar2 + 0x18) - lVar1 >> 3)) &&
     (plVar4 = *(long **)(lVar1 + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8),
     plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x40))(plVar4,"0123456789abcdefABCDEFxX+-pPiInN","",param_1);
    local_58 = numpunct<char>::id;
    if (numpunct<char>::id._0_8_ != -1) {
      local_48 = &local_58;
      local_50 = &local_48;
      __call_once((ulong *)numpunct<char>::id,&local_50,FUN_0402d4a0);
    }
    if (((long)(int)numpunct<char>::id._8_4_ - 1U <
         (ulong)(*(long *)(local_60 + 0x18) - *(long *)(local_60 + 0x10) >> 3)) &&
       (plVar4 = *(long **)(*(long *)(local_60 + 0x10) +
                           ((long)(int)numpunct<char>::id._8_4_ - 1U) * 8), plVar4 != (long *)0x0))
    {
      cVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
      *param_2 = cVar3;
      cVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
      *param_3 = cVar3;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      locale::~locale((locale *)&local_60);
      return;
    }
  }
  else {
    FUN_03ff9c28();
  }
  uVar5 = FUN_03ff9c28();
  locale::~locale((locale *)&local_60);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar5);
}

