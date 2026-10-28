// rea decompile_all
// name: ChocDino.UIFX.VideoPlayerSource$$UpdateMaterial
// address: 0x43e3714
// body: available
// range: 0x43e3714-0x43e3a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e3a1c to 0x87892b4 UnityEngine.UI.Graphic$$UpdateMaterial (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43e3a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_VideoPlayerSource__UpdateMaterial(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  if ((DAT_09517d4b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09196ec0);
    FUN_03f5c2a4(&DAT_0918cd20);
    DAT_09517d4b = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0xe0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar11,0);
  if ((uVar2 & 1) == 0) goto LAB_043e39f8;
  uVar2 = ChocDino_UIFX_VideoPlayerSource__HasVideoTexture(param_1);
  lVar12 = *(long *)(param_1 + 0xe0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_09196ec0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar12 == 0) goto LAB_043e3a20;
    UnityEngine_Material__SetFloat(0,lVar12,**(undefined4 **)(DAT_09196ec0 + 0xb8),0);
    goto LAB_043e39f8;
  }
  if (*(int *)(DAT_09196ec0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar12 == 0) goto LAB_043e3a20;
  UnityEngine_Material__SetFloat(0x3f800000,lVar12,**(undefined4 **)(DAT_09196ec0 + 0xb8),0);
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  puVar3 = *(undefined4 **)(DAT_0918cb68 + 0xb8);
  uVar13 = *puVar3;
  uVar14 = puVar3[1];
  if (DAT_09515ce9 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce9 = '\x01';
    puVar3 = *(undefined4 **)(DAT_0918cb68 + 0xb8);
  }
  uVar19 = puVar3[2];
  uVar20 = puVar3[3];
  if (DAT_09516627 == '\0') {
    FUN_03f5c2a4(&DAT_0918cc38);
    DAT_09516627 = '\x01';
  }
  if (*(long *)(param_1 + 0xd8) == 0) goto LAB_043e3a20;
  puVar3 = *(undefined4 **)(DAT_0918cc38 + 0xb8);
  uVar15 = *puVar3;
  uVar16 = puVar3[1];
  uVar17 = puVar3[2];
  uVar18 = puVar3[3];
  iVar1 = UnityEngine_Video_VideoPlayer__get_targetCamera3DLayout(*(long *)(param_1 + 0xd8),0);
  if (iVar1 != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_043e3a20;
    iVar1 = UnityEngine_Video_VideoPlayer__get_targetCamera3DLayout(*(long *)(param_1 + 0xd8),0);
    if (iVar1 == 1) {
      if (*(int *)(DAT_0918cd20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = *(undefined4 **)(DAT_0918cd20 + 0xb8);
      puVar3 = puVar4 + 1;
      puVar5 = puVar4 + 2;
      puVar6 = puVar4 + 3;
      puVar7 = puVar4 + 4;
      puVar8 = puVar4 + 5;
      puVar9 = puVar4 + 6;
      puVar10 = puVar4 + 7;
    }
    else {
      if (*(long *)(param_1 + 0xd8) == 0) goto LAB_043e3a20;
      iVar1 = UnityEngine_Video_VideoPlayer__get_targetCamera3DLayout(*(long *)(param_1 + 0xd8),0);
      if (iVar1 != 2) goto LAB_043e3988;
      if (*(int *)(DAT_0918cd20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar12 = *(long *)(DAT_0918cd20 + 0xb8);
      puVar4 = (undefined4 *)(lVar12 + 0x20);
      puVar3 = (undefined4 *)(lVar12 + 0x24);
      puVar5 = (undefined4 *)(lVar12 + 0x28);
      puVar6 = (undefined4 *)(lVar12 + 0x2c);
      puVar7 = (undefined4 *)(lVar12 + 0x30);
      puVar8 = (undefined4 *)(lVar12 + 0x34);
      puVar9 = (undefined4 *)(lVar12 + 0x38);
      puVar10 = (undefined4 *)(lVar12 + 0x3c);
    }
    uVar13 = *puVar4;
    uVar14 = *puVar3;
    uVar19 = *puVar5;
    uVar20 = *puVar6;
    uVar15 = *puVar7;
    uVar16 = *puVar8;
    uVar17 = *puVar9;
    uVar18 = *puVar10;
  }
LAB_043e3988:
  if (*(long *)(param_1 + 0xe0) != 0) {
    UnityEngine_Material__set_mainTextureOffset(uVar13,uVar14,*(long *)(param_1 + 0xe0),0);
    if (*(long *)(param_1 + 0xe0) != 0) {
      UnityEngine_Material__set_mainTextureScale(uVar19,uVar20,*(long *)(param_1 + 0xe0),0);
      lVar12 = *(long *)(param_1 + 0xe0);
      if (*(int *)(DAT_09196ec0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar12 != 0) {
        UnityEngine_Material__SetColorImpl
                  (uVar15,uVar16,uVar17,uVar18,lVar12,
                   *(undefined4 *)(*(long *)(DAT_09196ec0 + 0xb8) + 4),0);
LAB_043e39f8:
        UnityEngine_UI_Graphic__UpdateMaterial(param_1,0);
        return;
      }
    }
  }
LAB_043e3a20:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

