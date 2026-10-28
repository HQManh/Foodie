// rea decompile_all
// name: System.String$$IndexOfCharArray
// address: 0x74352b0
// body: available
// range: 0x74352b0-0x74353d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74353d4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_String__IndexOfCharArray(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  uint local_70 [10];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_09521032 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9820);
    DAT_09521032 = 1;
  }
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  auVar5 = FUN_05ff7000(param_2,DAT_091b9820);
  System_String__InitializeProbabilisticMap(local_70,auVar5._0_8_,auVar5._8_8_);
  if (0 < param_4) {
    uVar4 = -((param_3 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1;
    param_4 = param_4 + 1;
    do {
      uVar1 = *(ushort *)(param_1 + 0x14 + uVar4);
      if ((((local_70[(ulong)uVar1 & 7] >> (ulong)(uVar1 >> 3 & 0x1f) & 1) != 0) &&
          ((*(uint *)((long)local_70 + ((ulong)(uVar1 >> 6) & 0x1c)) >> (ulong)(uVar1 >> 0xb) & 1)
           != 0)) && (uVar3 = System_String__ArrayContains((ulong)uVar1,param_2), (uVar3 & 1) != 0))
      {
        if ((long)uVar4 < 0) {
          uVar4 = uVar4 + 1;
        }
        uVar4 = uVar4 >> 1;
        goto LAB_0743539c;
      }
      param_4 = param_4 + -1;
      uVar4 = uVar4 + 2;
    } while (1 < param_4);
  }
  uVar4 = 0xffffffff;
LAB_0743539c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

