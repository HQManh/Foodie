// rea decompile_all
// name: ChocDino.UIFX.TrailEffect$$StoreOriginalVertices
// address: 0x43af158
// body: available
// range: 0x43af158-0x43af3fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43af3f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffect__StoreOriginalVertices(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  float local_c8;
  undefined1 auStack_c4 [12];
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  
  if ((DAT_09517af3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b16f8);
    FUN_03f5c2a4(&DAT_091b1740);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091b1760);
    FUN_03f5c2a4(&DAT_0917cfe8);
    DAT_09517af3 = 1;
  }
  plVar9 = (long *)(param_1 + 0x80);
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (*plVar9 == 0) {
    if (param_2 == 0) goto LAB_043af3f8;
LAB_043af24c:
    uVar7 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
    lVar8 = thunk_FUN_03f9944c(DAT_0917cfe8);
    FUN_058941e8(lVar8,uVar7,DAT_091b16f8);
    *plVar9 = lVar8;
    thunk_FUN_03f5d7b8(plVar9,lVar8);
    lVar8 = *plVar9;
  }
  else {
    if (param_2 == 0) goto LAB_043af3f8;
    iVar5 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
    if (*plVar9 == 0) goto LAB_043af3f8;
    iVar6 = FUN_05894540(*plVar9,DAT_091b1740);
    if (iVar5 != iVar6) {
      *plVar9 = 0;
      thunk_FUN_03f5d7b8(plVar9,0);
    }
    lVar8 = *plVar9;
    if (lVar8 == 0) goto LAB_043af24c;
  }
  UnityEngine_UI_VertexHelper__GetUIVertexStream(param_2,lVar8,0);
  if (1 < *(uint *)(param_1 + 0x38)) {
    if (*plVar9 == 0) {
LAB_043af3f8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar5 = *(int *)(*plVar9 + 0x18);
    if (0 < iVar5) {
      iVar6 = 0;
      do {
        if (*plVar9 == 0) goto LAB_043af3f8;
        FUN_05894708(&local_d0,*plVar9,iVar6,DAT_091b1750);
        fVar4 = local_c8;
        uVar2 = local_d0;
        fVar3 = local_d0._4_4_;
        memcpy(&local_130,auStack_c4,0x60);
        lVar8 = UnityEngine_Component__get_transform(param_1,0);
        if (lVar8 == 0) goto LAB_043af3f8;
        UnityEngine_Transform__get_localToWorldMatrix(&local_d0,lVar8,0);
        uVar1 = DAT_091b1760;
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_043af3f8;
        fVar10 = (float)uVar2;
        local_d0 = CONCAT44((float)((ulong)local_d0 >> 0x20) * fVar10 +
                            SUB84(auStack_c4._4_8_,4) * fVar3 +
                            (float)((ulong)local_b0 >> 0x20) * fVar4 +
                            (float)((ulong)local_a0 >> 0x20),
                            (float)local_d0 * fVar10 + (float)auStack_c4._4_8_ * fVar3 +
                            (float)local_b0 * fVar4 + (float)local_a0);
        local_c8 = fVar10 * local_c8 + fVar3 * local_b8 + fVar4 * local_a8 + local_98;
        memcpy(auStack_c4,&local_130,0x60);
        FUN_0589476c(lVar8,iVar6,&local_d0,uVar1);
        iVar6 = iVar6 + 1;
      } while (iVar5 != iVar6);
    }
  }
  return;
}

