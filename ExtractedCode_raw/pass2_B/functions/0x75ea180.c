// rea decompile_all
// name: System.Enum$$InternalFormattedHexString
// address: 0x75ea180
// body: available
// range: 0x75ea180-0x75ea60b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ea5b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ea5b8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ea608 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void System_Enum__InternalFormattedHexString(long *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined2 local_38 [2];
  undefined2 local_34 [2];
  undefined2 local_30 [2];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  puVar3 = &local_50;
  if ((DAT_09521ef6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09213570);
    FUN_03f5c2a4(&DAT_09213540);
    FUN_03f5c2a4(&DAT_09213550);
    FUN_03f5c2a4(&DAT_09213538);
    DAT_09521ef6 = 1;
  }
  local_24[0] = 0;
  local_28[0] = 0;
  local_2c[0] = 0;
  local_30[0] = 0;
  local_34[0] = 0;
  local_38[0] = 0;
  local_48 = 0;
  local_40 = (undefined1  [8])0x0;
  local_50 = 0;
  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = System_Convert__GetTypeCode(param_1,0);
  if (iVar1 < 8) {
    if (iVar1 < 5) {
      if (iVar1 == 3) {
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_1 == (long *)0x0) goto LAB_075ea5b0;
        if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535400 + 0x40)) {
          puVar4 = (undefined1 *)thunk_FUN_03f99594(param_1);
          local_2c[0] = System_Convert__ToByte(*puVar4,0);
          puVar4 = local_2c;
          goto LAB_075ea540;
        }
      }
      else {
        if (iVar1 != 4) {
LAB_075ea5bc:
          uVar7 = thunk_FUN_03fc39d4(&DAT_092123c8);
          uVar7 = System_Environment__GetResourceString(uVar7,0);
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar8 = thunk_FUN_03f9944c();
          System_InvalidOperationException___ctor(uVar8,uVar7,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091c9000);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,uVar7);
        }
        if (param_1 == (long *)0x0) goto LAB_075ea5b0;
        if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535460 + 0x40)) {
          puVar2 = (undefined2 *)thunk_FUN_03f99594(param_1);
          local_38[0] = *puVar2;
          puVar2 = local_38;
          goto LAB_075ea450;
        }
      }
    }
    else if (iVar1 == 5) {
      if (param_1 == (long *)0x0) {
LAB_075ea5b0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535408 + 0x40)) {
        puVar4 = (undefined1 *)thunk_FUN_03f99594(param_1);
        local_24[0] = *puVar4;
        puVar4 = local_24;
LAB_075ea540:
        System_Byte__ToString(puVar4,DAT_09213540,0,0);
        return;
      }
    }
    else if (iVar1 == 6) {
      if (param_1 == (long *)0x0) goto LAB_075ea5b0;
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_095353f0 + 0x40)) {
        puVar4 = (undefined1 *)thunk_FUN_03f99594(param_1);
        local_28[0] = *puVar4;
        puVar4 = local_28;
        goto LAB_075ea540;
      }
    }
    else {
      if (iVar1 != 7) goto LAB_075ea5bc;
      if (param_1 == (long *)0x0) goto LAB_075ea5b0;
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535410 + 0x40)) {
        puVar2 = (undefined2 *)thunk_FUN_03f99594(param_1);
        local_30[0] = *puVar2;
        puVar2 = local_30;
        goto LAB_075ea450;
      }
    }
  }
  else if (iVar1 < 10) {
    if (iVar1 == 8) {
      if (param_1 == (long *)0x0) goto LAB_075ea5b0;
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535418 + 0x40)) {
        puVar2 = (undefined2 *)thunk_FUN_03f99594(param_1);
        local_34[0] = *puVar2;
        puVar2 = local_34;
LAB_075ea450:
        System_UInt16__ToString(puVar2,DAT_09213550,0,0);
        return;
      }
    }
    else {
      if (iVar1 != 9) goto LAB_075ea5bc;
      if (param_1 == (long *)0x0) goto LAB_075ea5b0;
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535420 + 0x40)) {
        puVar6 = (undefined4 *)thunk_FUN_03f99594(param_1);
        puVar3 = (undefined8 *)local_40;
        local_40._0_4_ = *puVar6;
        goto LAB_075ea594;
      }
    }
  }
  else if (iVar1 == 10) {
    if (param_1 == (long *)0x0) goto LAB_075ea5b0;
    if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535428 + 0x40)) {
      puVar6 = (undefined4 *)thunk_FUN_03f99594(param_1);
      puVar3 = (undefined8 *)((long)local_40 + 4);
      local_40._4_4_ = *puVar6;
LAB_075ea594:
      System_UInt32__ToString(puVar3,DAT_09213570,0,0);
      return;
    }
  }
  else if (iVar1 == 0xb) {
    if (param_1 == (long *)0x0) goto LAB_075ea5b0;
    if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535440 + 0x40)) {
      puVar5 = (undefined8 *)thunk_FUN_03f99594(param_1);
      local_50 = *puVar5;
LAB_075ea4ec:
      System_UInt64__ToString(puVar3,DAT_09213538,0,0);
      return;
    }
  }
  else {
    if (iVar1 != 0xc) goto LAB_075ea5bc;
    if (param_1 == (long *)0x0) goto LAB_075ea5b0;
    if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535448 + 0x40)) {
      puVar3 = (undefined8 *)thunk_FUN_03f99594(param_1);
      local_48 = *puVar3;
      puVar3 = &local_48;
      goto LAB_075ea4ec;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(param_1);
}

