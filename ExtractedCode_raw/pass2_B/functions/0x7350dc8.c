// rea decompile_all
// name: Lean.Touch.LeanTouch$$AddFinger
// address: 0x7350dc8
// body: available
// range: 0x7350dc8-0x7351197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7351194 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Lean_Touch_LeanTouch__AddFinger
               (undefined4 param_1,float param_2,undefined4 param_3,long param_4,undefined4 param_5,
               byte param_6)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar6 = param_4;
  fVar13 = param_2;
  if ((DAT_095207ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a83a8);
    FUN_03f5c2a4(&DAT_091876d8);
    FUN_03f5c2a4(&DAT_09187720);
    FUN_03f5c2a4(&DAT_09187728);
    FUN_03f5c2a4(&DAT_091ae148);
    FUN_03f5c2a4(&DAT_091ae178);
    FUN_03f5c2a4(&DAT_091ae200);
    lVar6 = FUN_03f5c2a4(&DAT_091ae188);
    DAT_095207ea = 1;
  }
  lVar6 = Lean_Touch_LeanTouch__FindFinger(lVar6,param_5);
  if (lVar6 == 0) {
    if ((param_6 & 1) == 0) {
      return 0;
    }
    iVar4 = Lean_Touch_LeanTouch__FindInactiveFingerIndex(0,param_5);
    if (iVar4 < 0) {
      lVar6 = thunk_FUN_03f9944c(DAT_091876d8);
      Lean_Touch_LeanFinger___ctor();
      if (lVar6 == 0) goto LAB_07351194;
      *(undefined4 *)(lVar6 + 0x10) = param_5;
    }
    else {
      if (*(int *)(DAT_09187728 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_07351194;
      lVar6 = FUN_057e0998(lVar6,iVar4,DAT_091ae188);
      lVar7 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x10);
      if ((lVar7 == 0) || (FUN_057e251c(lVar7,iVar4,DAT_091ae178), lVar6 == 0)) goto LAB_07351194;
      if (*(float *)(param_4 + 0x28) < *(float *)(lVar6 + 0x14)) {
        *(undefined4 *)(lVar6 + 0x1c) = 0;
      }
      *(undefined2 *)(lVar6 + 0x20) = 0;
      *(undefined1 *)(lVar6 + 0x22) = 0;
      *(float *)(lVar6 + 0x14) = 0.0;
      *(undefined4 *)(lVar6 + 0x17) = 0;
    }
    lVar7 = DAT_09187728;
    *(undefined4 *)(lVar6 + 0x2c) = param_1;
    *(float *)(lVar6 + 0x30) = param_2;
    *(undefined4 *)(lVar6 + 0x34) = param_1;
    *(float *)(lVar6 + 0x38) = param_2;
    iVar4 = *(int *)(lVar7 + 0xe4);
    *(undefined4 *)(lVar6 + 0x24) = param_3;
    if (iVar4 == 0) {
      FUN_03f5c424();
    }
    fVar13 = param_2;
    bVar3 = Lean_Touch_LeanTouch__PointOverGui(param_1);
    lVar10 = *(long *)(DAT_09187728 + 0xb8);
    *(byte *)(lVar6 + 0x44) = bVar3 & 1;
    lVar7 = DAT_091ae148;
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) goto LAB_07351194;
    lVar8 = *(long *)(lVar10 + 0x10);
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_07351194;
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
      *plVar9 = lVar6;
      thunk_FUN_03f5d7b8(plVar9,lVar6);
    }
    else {
      FUN_057e0c68(lVar10,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
  }
  else {
    if (*(int *)(DAT_09187728 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 0x88);
    if (lVar7 == 0) goto LAB_07351194;
    FUN_053ebe0c(lVar7,lVar6,DAT_091a83a8);
  }
  *(undefined4 *)(lVar6 + 0x3c) = param_1;
  *(float *)(lVar6 + 0x40) = param_2;
  cVar1 = *(char *)(param_4 + 0x3d);
  *(byte *)(lVar6 + 0x18) = param_6 & 1;
  *(undefined4 *)(lVar6 + 0x28) = param_3;
  if (cVar1 == '\0') {
    return lVar6;
  }
  if (*(float *)(param_4 + 0x44) <= 0.0) {
    if (*(int *)(lVar6 + 0x10) == -0x2a) {
      fVar12 = (float)Lean_Touch_LeanFinger__get_SnapshotDuration(lVar6);
      fVar13 = 10.0;
      if (10.0 < fVar12) {
        uVar11 = *(undefined8 *)(lVar6 + 0x48);
        fVar12 = *(float *)(lVar6 + 0x14);
        if (*(int *)(DAT_09187720 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar12 = fVar12 + -10.0;
        goto LAB_07351004;
      }
    }
  }
  else {
    fVar12 = (float)Lean_Touch_LeanFinger__get_SnapshotDuration(lVar6);
    fVar14 = *(float *)(param_4 + 0x44);
    if (fVar14 < fVar12) {
      uVar11 = *(undefined8 *)(lVar6 + 0x48);
      fVar12 = *(float *)(lVar6 + 0x14);
      if (*(int *)(DAT_09187720 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar12 = fVar12 - fVar14;
LAB_07351004:
      uVar5 = Lean_Touch_LeanSnapshot__GetLowerIndex(fVar12,uVar11);
      Lean_Touch_LeanFinger__ClearSnapshots(lVar6,uVar5);
    }
  }
  if (0.0 < *(float *)(param_4 + 0x40)) {
    if (*(long *)(lVar6 + 0x48) == 0) {
LAB_07351194:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(*(long *)(lVar6 + 0x48) + 0x18) != 0) {
      fVar12 = (float)Lean_Touch_LeanFinger__get_LastSnapshotScreenDelta(lVar6);
      if (DAT_09516ea4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09516ea4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (SQRT(fVar12 * fVar12 + fVar13 * fVar13) < *(float *)(param_4 + 0x40)) {
        return lVar6;
      }
    }
  }
  Lean_Touch_LeanFinger__RecordSnapshot(lVar6);
  return lVar6;
}

