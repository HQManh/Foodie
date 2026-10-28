// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck$$DrawActiveDatePartSlider
// address: 0x4580518
// body: available
// range: 0x4580518-0x4580a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4580a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4580a4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_OnlineTimeCheck__DrawActiveDatePartSlider(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  double dVar11;
  double __x;
  undefined4 local_60;
  int local_5c;
  double local_58;
  
  if ((DAT_09518922 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_09193048);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0917ff68);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_09518922 = 1;
  }
  iVar4 = *(int *)(param_1 + 0x60);
  local_5c = 0;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      iVar1 = *(int *)(param_1 + 100) + -0x1e;
      iVar4 = *(int *)(param_1 + 100) + 0x1e;
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      if (0x270e < iVar4) {
        iVar4 = 9999;
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_5c = System_DateTime__get_Year(param_1 + 0x58,0);
      fVar10 = (float)iVar1;
    }
    else {
      if (iVar4 != 1) {
LAB_04580710:
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_5c = System_DateTime__get_Second(param_1 + 0x58,0);
        goto LAB_04580734;
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_5c = System_DateTime__get_Month(param_1 + 0x58,0);
      fVar10 = 1.0;
      iVar4 = 0xc;
    }
  }
  else if (iVar4 == 2) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_DateTime__get_Year(param_1 + 0x58,0);
    uVar3 = System_DateTime__get_Month(param_1 + 0x58,0);
    iVar4 = System_DateTime__DaysInMonth(uVar2,uVar3,0);
    local_5c = System_DateTime__get_Day(param_1 + 0x58,0);
    fVar10 = 1.0;
  }
  else if (iVar4 == 3) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_5c = System_DateTime__get_Hour(param_1 + 0x58,0);
    fVar10 = 0.0;
    iVar4 = 0x17;
  }
  else {
    if (iVar4 != 4) goto LAB_04580710;
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_5c = System_DateTime__get_Minute(param_1 + 0x58,0);
LAB_04580734:
    fVar10 = 0.0;
    iVar4 = 0x3b;
  }
  iVar1 = local_5c;
  UnityEngine_GUILayout__Space(0x40c00000,0);
  lVar5 = DAT_091c01c8;
  lVar9 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar9 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar9 = *(long *)(lVar5 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03f95a6c();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar5 + 0xb8),0);
  local_60 = *(undefined4 *)(param_1 + 0x60);
  uVar6 = FUN_03f5c42c(DAT_09193048,&local_60);
  uVar6 = System_String__Format(DAT_09226038,uVar6,0);
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188c20);
  }
  uVar7 = EssentialSystemR1_OnlineTimeCheck__BodyLabelStyle();
  lVar5 = FUN_03f5c394(DAT_0917ff68,1);
  uVar8 = UnityEngine_GUILayout__Width(0x42ac0000,0);
  if (lVar5 == 0) goto LAB_04580a48;
  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_04580a4c;
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  thunk_FUN_03f5d7b8();
  UnityEngine_GUILayout__Label(uVar6,uVar7,lVar5,0);
  uVar6 = EssentialSystemR1_OnlineTimeCheck__SliderStyle();
  uVar7 = EssentialSystemR1_OnlineTimeCheck__SliderThumbStyle();
  lVar5 = FUN_03f5c394(DAT_0917ff68,1);
  uVar8 = UnityEngine_GUILayout__Height(0x42280000,0);
  if (lVar5 == 0) goto LAB_04580a48;
  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_04580a4c;
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  thunk_FUN_03f5d7b8();
  fVar10 = (float)UnityEngine_GUILayout__DoHorizontalSlider
                            ((float)iVar1,fVar10,(float)iVar4,uVar6,uVar7,lVar5,0);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)fVar10;
  dVar11 = modf(__x,&local_58);
  if (0.0 <= fVar10) {
    if (dVar11 == 0.5) {
      dVar11 = 1.0;
      goto LAB_0458095c;
    }
    local_58 = (double)(long)(__x + 0.5);
  }
  else if (dVar11 == -0.5) {
    dVar11 = -1.0;
LAB_0458095c:
    if (((long)local_58 & 1U) != 0) {
      local_58 = local_58 + dVar11;
    }
  }
  else {
    local_58 = (double)(long)(__x + -0.5);
  }
  iVar4 = -0x80000000;
  if (local_58 != INFINITY) {
    iVar4 = (int)local_58;
  }
  uVar6 = System_Int32__ToString(&local_5c,0);
  uVar7 = EssentialSystemR1_OnlineTimeCheck__BodyLabelStyle();
  lVar5 = FUN_03f5c394(DAT_0917ff68,1);
  uVar8 = UnityEngine_GUILayout__Width(0x42580000,0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      thunk_FUN_03f5d7b8();
      UnityEngine_GUILayout__Label(uVar6,uVar7,lVar5,0);
      UnityEngine_GUILayout__EndHorizontal(0);
      if (iVar4 != local_5c) {
        EssentialSystemR1_OnlineTimeCheck__SetDatePart
                  (param_1,*(undefined4 *)(param_1 + 0x60),iVar4);
      }
      return;
    }
LAB_04580a4c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_04580a48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

