// rea decompile_all
// name: System.DateTimeFormat$$Format
// address: 0x759aff8
// body: available
// range: 0x759aff8-0x759b2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x759b14c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759b244 to 0x7440700 System.Text.StringBuilderCache$$GetStringAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x759b2d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759b2dc to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_DateTimeFormat__Format
               (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 local_80;
  undefined8 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if ((DAT_09521c26 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_091ba980);
    FUN_03f5c2a4(&DAT_091ba988);
    FUN_03f5c2a4(&DAT_091ba950);
    FUN_03f5c2a4(&DAT_091ba948);
    DAT_09521c26 = 1;
  }
  local_60 = 0;
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x10) == 1)) {
    uVar2 = System_String__get_Chars(param_2,0,0);
    if (uVar2 < 0x53) {
      if (uVar2 == 0x4f) {
LAB_0759b0ec:
        local_80 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        if (*(int *)(DAT_09183568 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_DateTimeFormat__TryFormatO(param_1,param_4,&local_c0,0x21,(long)&local_60 + 4);
        uVar7 = (ulong)local_60._4_4_;
        if (0x21 < local_60._4_4_) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        if ((*(ushort *)(*(long *)(DAT_091ba980 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_70 = &local_c0;
        uStack_68 = uVar7;
        lVar6 = FUN_06109374(&local_70,DAT_091ba988);
LAB_0759b298:
        if (*(long *)(lVar5 + 0x28) == local_58) {
          return lVar6;
        }
        goto LAB_0759b2dc;
      }
      if (uVar2 == 0x52) goto LAB_0759b248;
    }
    else {
      if (uVar2 == 0x72) {
LAB_0759b248:
        lVar6 = System_String__FastAllocateString(0x1d,0);
        if (lVar6 == 0) {
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_0759b2dc;
        }
        uVar3 = System_String__GetRawStringData(lVar6,0);
        uVar1 = *(undefined4 *)(lVar6 + 0x10);
        if (*(int *)(DAT_09183568 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183568);
        }
        System_DateTimeFormat__TryFormatR(param_1,param_4,uVar3,uVar1,&local_60);
        goto LAB_0759b298;
      }
      if (uVar2 == 0x6f) goto LAB_0759b0ec;
    }
  }
  if (*(int *)(DAT_09183570 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Globalization_DateTimeFormatInfo__GetInstance(param_3,0);
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
    if (param_2 != 0) goto LAB_0759b1bc;
LAB_0759b1ec:
    uVar4 = 0;
  }
  else {
    if (param_2 == 0) goto LAB_0759b1ec;
LAB_0759b1bc:
    uVar4 = System_String__GetRawStringData(param_2,0);
    param_2 = (ulong)*(uint *)(param_2 + 0x10);
  }
  if (*(int *)(DAT_09183568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_DateTimeFormat__FormatStringBuilder(param_1,uVar4,param_2,uVar3,param_4);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    lVar5 = System_Text_StringBuilderCache__GetStringAndRelease(uVar3,0);
    return lVar5;
  }
LAB_0759b2dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

