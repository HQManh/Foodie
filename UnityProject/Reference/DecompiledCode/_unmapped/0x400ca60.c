// rea decompile_all
// name: std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::put
// address: 0x400ca60
// body: available
// range: 0x400ca60-0x400ccff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x400ccfc to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, tm const*, char const*, char const*) const */

long * __thiscall
std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
put(time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
   long *param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,undefined1 *param_6,
   undefined1 *param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  uint uVar11;
  long local_80;
  undefined1 *local_78;
  undefined1 ***local_70;
  undefined1 **local_68;
  
  ios_base::getloc();
  local_78 = ctype<char>::id;
  if (ctype<char>::id._0_8_ != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
    __call_once((ulong *)ctype<char>::id,&local_70,FUN_0402d4a0);
  }
  if (((ulong)(*(long *)(local_80 + 0x18) - *(long *)(local_80 + 0x10) >> 3) <=
       (long)(int)ctype<char>::id._8_4_ - 1U) ||
     (plVar10 = *(long **)(*(long *)(local_80 + 0x10) + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8)
     , plVar10 == (long *)0x0)) {
    uVar5 = FUN_03ff9c28();
    locale::~locale((locale *)&local_80);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar5);
  }
  locale::~locale((locale *)&local_80);
LAB_0400cb34:
  while( true ) {
    if (param_6 == param_7) {
      return param_2;
    }
    cVar1 = (**(code **)(*plVar10 + 0x48))(plVar10,*param_6,0);
    if (cVar1 != '%') break;
    puVar9 = param_6 + 1;
    if (puVar9 == param_7) {
      if (param_2 == (long *)0x0) {
        return (long *)0x0;
      }
      puVar7 = (undefined1 *)param_2[6];
      uVar6 = *param_6;
      if (puVar7 != (undefined1 *)param_2[7]) {
LAB_0400cc44:
        param_2[6] = (long)(puVar7 + 1);
        *puVar7 = uVar6;
        return param_2;
      }
LAB_0400cca0:
      iVar4 = (**(code **)(*param_2 + 0x68))(param_2);
      if (iVar4 == -1) {
        return (long *)0x0;
      }
      return param_2;
    }
    uVar2 = (**(code **)(*plVar10 + 0x48))(plVar10,*puVar9,0);
    if (((uVar2 & 0xff) == 0x4f) || ((uVar2 & 0xff) == 0x45)) {
      puVar7 = param_6 + 2;
      if (puVar7 == param_7) {
        if (param_2 == (long *)0x0) {
          return (long *)0x0;
        }
        puVar7 = (undefined1 *)param_2[6];
        uVar6 = *param_6;
        if (puVar7 == (undefined1 *)param_2[7]) {
          iVar4 = (**(code **)(*param_2 + 0x68))(param_2);
          if (iVar4 == -1) {
            return (long *)0x0;
          }
        }
        else {
          param_2[6] = (long)(puVar7 + 1);
          *puVar7 = uVar6;
        }
        puVar7 = (undefined1 *)param_2[6];
        uVar6 = *puVar9;
        if (puVar7 != (undefined1 *)param_2[7]) goto LAB_0400cc44;
        goto LAB_0400cca0;
      }
      uVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,*puVar7,0);
      puVar9 = puVar7;
      uVar11 = uVar2;
      uVar2 = uVar3;
    }
    else {
      uVar11 = 0;
    }
    param_2 = (long *)(**(code **)(*(long *)this + 0x18))
                                (this,param_2,param_3,param_4,param_5,uVar2,uVar11);
    param_6 = puVar9 + 1;
  }
  plVar8 = param_2;
  if (param_2 != (long *)0x0) {
    puVar9 = (undefined1 *)param_2[6];
    uVar6 = *param_6;
    if (puVar9 != (undefined1 *)param_2[7]) {
      param_6 = param_6 + 1;
      param_2[6] = (long)(puVar9 + 1);
      *puVar9 = uVar6;
      goto LAB_0400cb34;
    }
    iVar4 = (**(code **)(*param_2 + 0x68))(param_2);
    plVar8 = (long *)0x0;
    if (iVar4 != -1) {
      plVar8 = param_2;
    }
  }
  param_6 = param_6 + 1;
  param_2 = plVar8;
  goto LAB_0400cb34;
}

