// rea decompile_all
// name: System.DateTimeFormat$$TryFormatR
// address: 0x75a0c50
// body: available
// range: 0x75a0c50-0x75a0fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a0fc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a0fc8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_DateTimeFormat__TryFormatR
               (undefined8 param_1,undefined8 param_2,undefined2 *param_3,uint param_4,
               undefined4 *param_5)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_48;
  
  local_48 = param_1;
  if ((DAT_09521c2b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091ba998);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09521c2b = 1;
  }
  uVar8 = 0;
  local_58 = 0;
  local_5c = 0;
  if (param_4 < 0x1d) {
LAB_075a0f9c:
    *param_5 = uVar8;
    return 0x1c < param_4;
  }
  if (*(int *)(DAT_09183568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = **(undefined8 **)(DAT_09183568 + 0xb8);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bd60);
  }
  uVar7 = System_TimeSpan__op_Inequality(param_2,uVar11,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_48 = System_DateTime__op_Subtraction(param_1,param_2);
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_DateTime__GetDatePart(&local_48,(long)&local_58 + 4,&local_58,&local_5c);
  if (*(int *)(DAT_09183568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar10 = *(long *)(*(long *)(DAT_09183568 + 0xb8) + 0x20);
  uVar6 = System_DateTime__get_DayOfWeek(&local_48);
  if (lVar10 != 0) {
    if (*(uint *)(lVar10 + 0x18) <= uVar6) {
LAB_075a0fc8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar9 = *(long *)(*(long *)(DAT_09183568 + 0xb8) + 0x18);
    if (lVar9 != 0) {
      if (*(uint *)(lVar9 + 0x18) <= (int)local_58 - 1U) goto LAB_075a0fc8;
      lVar10 = *(long *)(lVar10 + (long)(int)uVar6 * 8 + 0x20);
      if (lVar10 != 0) {
        lVar9 = *(long *)(lVar9 + (long)(int)((int)local_58 - 1U) * 8 + 0x20);
        uVar5 = System_String__get_Chars(lVar10,0,0);
        *param_3 = uVar5;
        uVar5 = System_String__get_Chars(lVar10,1,0);
        param_3[1] = uVar5;
        uVar5 = System_String__get_Chars(lVar10,2,0);
        param_3[2] = uVar5;
        *(undefined4 *)(param_3 + 3) = 0x20002c;
        param_3[7] = 0x20;
        sVar1 = (short)(local_5c / 10);
        param_3[5] = sVar1 + 0x30;
        param_3[6] = (short)local_5c + sVar1 * -10 + 0x30;
        if (lVar9 != 0) {
          uVar5 = System_String__get_Chars(lVar9,0,0);
          param_3[8] = uVar5;
          uVar5 = System_String__get_Chars(lVar9,1,0);
          param_3[9] = uVar5;
          uVar5 = System_String__get_Chars(lVar9,2,0);
          param_3[10] = uVar5;
          param_3[0xb] = 0x20;
          param_3[0x10] = 0x20;
          sVar1 = (short)(local_58._4_4_ / 10);
          sVar2 = (short)(local_58._4_4_ / 100);
          sVar4 = (short)(local_58._4_4_ / 1000);
          param_3[0xc] = sVar4 + 0x30;
          param_3[0xf] = (short)((ulong)local_58 >> 0x20) + sVar1 * -10 + 0x30;
          param_3[0xe] = sVar1 + sVar2 * -10 + 0x30;
          param_3[0xd] = sVar2 + sVar4 * -10 + 0x30;
          uVar6 = System_DateTime__get_Hour(&local_48);
          param_3[0x13] = 0x3a;
          uVar3 = (ushort)((uVar6 & 0xff) / 10);
          param_3[0x11] = uVar3 | 0x30;
          param_3[0x12] = (short)uVar6 + uVar3 * -10 + 0x30;
          uVar6 = System_DateTime__get_Minute(&local_48);
          param_3[0x16] = 0x3a;
          uVar3 = (ushort)((uVar6 & 0xff) / 10);
          param_3[0x14] = uVar3 | 0x30;
          param_3[0x15] = (short)uVar6 + uVar3 * -10 + 0x30;
          uVar6 = System_DateTime__get_Second(&local_48);
          *(undefined8 *)(param_3 + 0x19) = 0x54004d00470020;
          uVar3 = (ushort)((uVar6 & 0xff) / 10);
          param_3[0x17] = uVar3 | 0x30;
          param_3[0x18] = (short)uVar6 + uVar3 * -10 + 0x30;
          uVar8 = 0x1d;
          goto LAB_075a0f9c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

