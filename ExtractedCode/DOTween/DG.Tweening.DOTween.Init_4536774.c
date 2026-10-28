// rea decompile_all
// name: DG.Tweening.DOTween$$Init
// address: 0x4536774
// body: available
// range: 0x4536774-0x4536da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4536d9c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4536da0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 DG_Tweening_DOTween__Init(long param_1,ushort param_2,ushort param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  ushort local_38 [2];
  ushort local_34 [2];
  
  local_40 = param_4;
  local_38[0] = param_3;
  local_34[0] = param_2;
  if ((DAT_09518688 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09187c58);
    FUN_03f5c2a4(&DAT_091b7088);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_091b6a68);
    FUN_03f5c2a4(&DAT_091b7090);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f8960);
    FUN_03f5c2a4(&DAT_091ffda8);
    FUN_03f5c2a4(&DAT_091f88e8);
    FUN_03f5c2a4(&DAT_091f83f0);
    FUN_03f5c2a4(&DAT_09209360);
    FUN_03f5c2a4(&DAT_09209320);
    DAT_09518688 = 1;
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  *(undefined1 *)(*(long *)(DAT_09183190 + 0xb8) + 0x90) = 1;
  if ((param_2 & 0xff) == 0) {
    if ((param_3 & 0xff) != 0) goto LAB_045368d4;
  }
  else {
    bVar6 = FUN_05c29110(local_34,DAT_091b6a68);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183190);
    }
    *(byte *)(*(long *)(DAT_09183190 + 0xb8) + 0x50) = bVar6 & 1;
    if ((char)local_38[0] != '\0') {
LAB_045368d4:
      bVar6 = FUN_05c29110(local_38,DAT_091b6a68);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183190);
      }
      *(byte *)(*(long *)(DAT_09183190 + 0xb8) + 8) = bVar6 & 1;
    }
  }
  if ((char)local_40 != '\0') {
    uVar7 = FUN_05c30b30(&local_40,DAT_091b7090);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183190);
    }
    DG_Tweening_DOTween__set_logBehaviour(uVar7);
  }
  DG_Tweening_Core_DOTweenComponent__Create(0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Inequality(param_1,0,0);
  if ((uVar8 & 1) != 0) {
    if ((char)local_38[0] == '\0') {
      if (param_1 == 0) goto LAB_04536da0;
      uVar2 = *(undefined1 *)(param_1 + 0x18);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(undefined1 *)(*(long *)(DAT_09183190 + 0xb8) + 8) = uVar2;
    }
    if ((char)local_40 == '\0') {
      if (param_1 == 0) goto LAB_04536da0;
      uVar7 = *(undefined4 *)(param_1 + 0x40);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      DG_Tweening_DOTween__set_logBehaviour(uVar7);
    }
    if ((char)local_34[0] == '\0') {
      if (param_1 == 0) goto LAB_04536da0;
      uVar2 = *(undefined1 *)(param_1 + 0x45);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(undefined1 *)(*(long *)(DAT_09183190 + 0xb8) + 0x50) = uVar2;
    }
    else if (param_1 == 0) goto LAB_04536da0;
    lVar9 = DAT_09183190;
    lVar10 = *(long *)(param_1 + 0x20);
    if (lVar10 == 0) goto LAB_04536da0;
    uVar7 = *(undefined4 *)(lVar10 + 0x10);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183190);
      lVar9 = DAT_09183190;
      lVar10 = *(long *)(param_1 + 0x20);
      lVar11 = *(long *)(DAT_09183190 + 0xb8);
      *(undefined4 *)(lVar11 + 0xc) = uVar7;
      if (lVar10 == 0) goto LAB_04536da0;
    }
    else {
      lVar11 = *(long *)(DAT_09183190 + 0xb8);
      *(undefined4 *)(lVar11 + 0xc) = uVar7;
    }
    uVar7 = *(undefined4 *)(lVar10 + 0x14);
    uVar2 = *(undefined1 *)(param_1 + 0x30);
    *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(lVar11 + 0x10) = uVar7;
    uVar12 = *(undefined4 *)(param_1 + 0x34);
    uVar7 = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)(lVar11 + 0x20) = uVar2;
    *(undefined4 *)(lVar11 + 0x24) = uVar12;
    *(undefined4 *)(lVar11 + 0x28) = uVar7;
    if ((char)local_34[0] == '\0') {
      bVar6 = *(char *)(param_1 + 0x45) != '\0';
    }
    else {
      bVar6 = FUN_05c29110(local_34,DAT_091b6a68);
      lVar9 = DAT_09183190;
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_03f5c424(lVar9);
      lVar9 = DAT_09183190;
    }
    lVar10 = *(long *)(lVar9 + 0xb8);
    uVar2 = *(undefined1 *)(param_1 + 0x3c);
    uVar3 = *(undefined1 *)(param_1 + 0x44);
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    *(byte *)(lVar10 + 0x50) = bVar6 & 1;
    uVar7 = *(undefined4 *)(param_1 + 0x48);
    *(undefined1 *)(lVar10 + 0x14) = uVar2;
    uVar12 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(lVar10 + 0x44) = uVar7;
    uVar2 = *(undefined1 *)(param_1 + 0x50);
    *(undefined4 *)(lVar10 + 0x3c) = uVar12;
    uVar7 = *(undefined4 *)(param_1 + 0x54);
    *(undefined1 *)(lVar10 + 0x40) = uVar2;
    uVar2 = *(undefined1 *)(param_1 + 0x60);
    *(undefined4 *)(lVar10 + 0x54) = uVar7;
    uVar7 = *(undefined4 *)(param_1 + 100);
    *(undefined1 *)(lVar10 + 0x48) = uVar2;
    uVar2 = *(undefined1 *)(param_1 + 0x68);
    uVar4 = *(undefined1 *)(param_1 + 0x69);
    *(undefined4 *)(lVar10 + 0x4c) = uVar7;
    cVar5 = DAT_0951877c;
    *(undefined1 *)(lVar10 + 0x38) = uVar3;
    *(undefined1 *)(lVar10 + 0x39) = uVar2;
    *(undefined8 *)(lVar10 + 0x58) = uVar13;
    if (cVar5 == '\0') {
      FUN_03f5c2a4(&DAT_09183190);
      DAT_0951877c = '\x01';
      lVar9 = DAT_09183190;
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_03f5c424(lVar9);
      lVar9 = DAT_09183190;
    }
    *(undefined1 *)(*(long *)(lVar9 + 0xb8) + 0x3a) = uVar4;
  }
  if (DAT_0951877d == '\0') {
    FUN_03f5c2a4(&DAT_091836f8);
    DAT_0951877d = '\x01';
  }
  if (**(int **)(DAT_091836f8 + 0xb8) < 2) {
LAB_04536d6c:
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    return *(undefined8 *)(*(long *)(DAT_09183190 + 0xb8) + 0x60);
  }
  lVar9 = FUN_03f5c394(DAT_091805f8,7);
  if (lVar9 == 0) {
LAB_04536da0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar9 + 0x18) != 0) {
    *(undefined8 *)(lVar9 + 0x20) = DAT_091ffda8;
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_09535400 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar13 = System_Boolean__ToString(*(long *)(DAT_09183190 + 0xb8) + 8,0);
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar9 + 0x28) = uVar13;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x28),uVar13);
      if (2 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + 0x30) = DAT_091f8960;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x30));
        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
          puVar1 = &DAT_09209320;
          if (*(char *)(*(long *)(DAT_09183190 + 0xb8) + 0x50) != '\0') {
            puVar1 = &DAT_09209360;
          }
          *(undefined8 *)(lVar9 + 0x38) = *puVar1;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x38));
          if (4 < *(uint *)(lVar9 + 0x18)) {
            *(undefined8 *)(lVar9 + 0x40) = DAT_091f88e8;
            thunk_FUN_03f5d7b8();
            if (*(int *)(DAT_09183190 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (DAT_0951877e == '\0') {
              FUN_03f5c2a4(&DAT_09183190);
              DAT_0951877e = '\x01';
            }
            if (*(int *)(DAT_09183190 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_58 = DAT_09187c58;
            local_48 = *(undefined4 *)(*(long *)(DAT_09183190 + 0xb8) + 0x2c);
            uStack_50 = 0xffffffffffffffff;
            uVar13 = System_Enum__ToString(&local_58,0);
            if (5 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x48) = uVar13;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x48),uVar13);
              if (6 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x50) = DAT_091f83f0;
                thunk_FUN_03f5d7b8();
                uVar13 = System_String__Concat(lVar9,0);
                DG_Tweening_Core_Debugger__Log(uVar13,0);
                goto LAB_04536d6c;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

