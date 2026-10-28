// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$AdjustRect
// address: 0x43d8420
// body: available
// range: 0x43d8420-0x43d872b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d8728 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterBase__AdjustRect(long *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_48;
  undefined8 local_28;
  
  local_28 = 0;
  local_48 = 0;
  if ((param_2 != 0) && (lVar3 = param_1[0xc], lVar3 != 0)) {
    uVar5 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(lVar3 + 0x2c) = uVar5;
    ChocDino_UIFX_FilterBase__GetResolutionScalingFactor(param_1);
    if (DAT_09517cab == '\0') {
      FUN_03f5c2a4(&DAT_0918cb90);
      DAT_09517cab = '\x01';
    }
    local_48 = **(undefined8 **)(DAT_0918cb90 + 0xb8);
    local_28 = local_48;
    if ((int)param_1[5] == 1) {
      (**(code **)(*param_1 + 0x368))(param_1,&local_28,&local_48,*(undefined8 *)(*param_1 + 0x370))
      ;
      if (*(int *)((long)param_1 + 0x24) == 0) {
        fVar4 = *(float *)(param_1 + 0x17);
        if (fVar4 == 0.0) {
          if (DAT_09517cab == '\0') {
            FUN_03f5c2a4(&DAT_0918cb90);
            DAT_09517cab = '\x01';
          }
          local_28 = **(undefined8 **)(DAT_0918cb90 + 0xb8);
          local_48 = **(undefined8 **)(DAT_0918cb90 + 0xb8);
        }
        else {
          fVar8 = *(float *)((long)param_1 + 0xa4);
          fVar6 = (float)(int)local_28;
          if (DAT_095163ce == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          fVar8 = fVar8 * (fVar6 / fVar4);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
            bVar2 = DAT_095163ce == '\0';
          }
          else {
            bVar2 = false;
          }
          fVar6 = *(float *)(param_1 + 0x17);
          fVar4 = (float)local_28._4_4_;
          fVar7 = *(float *)((long)param_1 + 0xa4);
          iVar1 = -0x80000000;
          if ((float)(int)fVar8 != INFINITY) {
            iVar1 = (int)fVar8;
          }
          local_28 = CONCAT44(local_28._4_4_,iVar1);
          if (bVar2) {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          fVar7 = (fVar4 / fVar6) * fVar7;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
            bVar2 = DAT_095163ce == '\0';
          }
          else {
            bVar2 = false;
          }
          fVar6 = *(float *)(param_1 + 0x17);
          fVar4 = (float)(int)local_48;
          fVar8 = *(float *)((long)param_1 + 0xa4);
          iVar1 = -0x80000000;
          if ((float)(int)fVar7 != INFINITY) {
            iVar1 = (int)fVar7;
          }
          local_28 = CONCAT44(iVar1,(int)local_28);
          if (bVar2) {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          fVar8 = (fVar4 / fVar6) * fVar8;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
            bVar2 = DAT_095163ce == '\0';
          }
          else {
            bVar2 = false;
          }
          fVar6 = *(float *)(param_1 + 0x17);
          fVar4 = (float)local_48._4_4_;
          fVar7 = *(float *)((long)param_1 + 0xa4);
          iVar1 = -0x80000000;
          if ((float)(int)fVar8 != INFINITY) {
            iVar1 = (int)fVar8;
          }
          local_48 = CONCAT44(local_48._4_4_,iVar1);
          if (bVar2) {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          fVar7 = (fVar4 / fVar6) * fVar7;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar1 = -0x80000000;
          if ((float)(int)fVar7 != INFINITY) {
            iVar1 = (int)fVar7;
          }
          local_48 = CONCAT44(iVar1,(int)local_48);
        }
      }
      ChocDino_UIFX_ScreenRectFromMeshes__Adjust(param_2,local_28,local_48,0);
    }
    lVar3 = param_1[0xc];
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x2c);
      *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(param_2 + 0x34);
      *(undefined8 *)(lVar3 + 0x2c) = uVar5;
      if (param_1[0xc] != 0) {
        ChocDino_UIFX_ScreenRectFromMeshes__OptimiseRects
                  (param_1[0xc],*(undefined8 *)((long)param_1 + 0xac),
                   *(undefined4 *)((long)param_1 + 0xb4),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

