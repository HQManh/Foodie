// rea decompile_all
// name: ChocDino.UIFX.VertexSkew$$ModifyMesh
// address: 0x43b19c4
// body: available
// range: 0x43b19c4-0x43b1cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b1cf4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b1cf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_VertexSkew__ModifyMesh(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1a8 [108];
  undefined1 auStack_13c [108];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  if ((DAT_09517b06 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091807a0);
    FUN_03f5c2a4(&DAT_0918c4c0);
    DAT_09517b06 = 1;
  }
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_80 = 0;
  uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_1,0);
  if (((uVar2 & 1) != 0) && (0.0 < *(float *)(param_1 + 0x34))) {
    if (*(int *)(param_1 + 0x20) == 1) {
      lVar3 = FUN_03f5c394(DAT_091807a0,4);
      if (param_2 == 0) {
LAB_043b1cf8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
      if (5 < iVar1) {
        if (lVar3 == 0) goto LAB_043b1cf8;
        iVar4 = 0;
        uVar2 = 0;
        do {
          uVar6 = 0;
          pfVar5 = (float *)(lVar3 + 0x20);
          do {
            if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_043b1cf4;
            UnityEngine_UI_VertexHelper__PopulateUIVertex(param_2,pfVar5,iVar4 + (int)uVar6,0);
            uVar6 = uVar6 + 1;
            pfVar5 = pfVar5 + 0x1b;
          } while (uVar6 != 4);
          ChocDino_UIFX_VertexSkew__GetBounds(lVar3,param_1 + 0x78,param_1 + 0x84);
          ChocDino_UIFX_VertexSkew__BuildMatrix(param_1);
          uVar6 = 0;
          pfVar5 = (float *)(lVar3 + 0x20);
          do {
            if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_043b1cf4:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            fVar7 = *pfVar5;
            fVar8 = pfVar5[1];
            fVar10 = *(float *)(param_1 + 0x40);
            fVar12 = *(float *)(param_1 + 0x50);
            fVar13 = *(float *)(param_1 + 0x60);
            fVar11 = pfVar5[2];
            fVar9 = *(float *)(param_1 + 0x70);
            *(ulong *)pfVar5 =
                 CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) * fVar7 +
                          (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) * fVar8 +
                          (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) * fVar11,
                          (float)*(undefined8 *)(param_1 + 0x68) +
                          (float)*(undefined8 *)(param_1 + 0x38) * fVar7 +
                          (float)*(undefined8 *)(param_1 + 0x48) * fVar8 +
                          (float)*(undefined8 *)(param_1 + 0x58) * fVar11);
            pfVar5[2] = fVar9 + fVar7 * fVar10 + fVar8 * fVar12 + fVar11 * fVar13;
            if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_043b1cf4;
            memmove(auStack_1a8,pfVar5,0x6c);
            UnityEngine_UI_VertexHelper__SetUIVertex(param_2,auStack_1a8,iVar4 + (int)uVar6,0);
            uVar6 = uVar6 + 1;
            pfVar5 = pfVar5 + 0x1b;
          } while (uVar6 != 4);
          uVar2 = uVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (uVar2 != (uint)(iVar1 / 6));
      }
    }
    else if (*(int *)(param_1 + 0x20) == 0) {
      ChocDino_UIFX_VertexSkew__GetBounds(param_2,param_1 + 0x78,param_1 + 0x84);
      ChocDino_UIFX_VertexSkew__BuildMatrix(param_1);
      if (*(int *)(DAT_0918c4c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      memmove(&local_d0,(void *)(*(long *)(DAT_0918c4c0 + 0xb8) + 0x14),0x6c);
      if (param_2 == 0) goto LAB_043b1cf8;
      iVar1 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_2,0);
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          UnityEngine_UI_VertexHelper__PopulateUIVertex(param_2,&local_d0,iVar4,0);
          fVar7 = (float)local_d0 * *(float *)(param_1 + 0x40);
          fVar8 = local_d0._4_4_ * *(float *)(param_1 + 0x50);
          local_d0 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) *
                              (float)local_d0 +
                              (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) *
                              local_d0._4_4_ +
                              (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) *
                              (float)uStack_c8,
                              (float)*(undefined8 *)(param_1 + 0x68) +
                              (float)*(undefined8 *)(param_1 + 0x38) * (float)local_d0 +
                              (float)*(undefined8 *)(param_1 + 0x48) * local_d0._4_4_ +
                              (float)*(undefined8 *)(param_1 + 0x58) * (float)uStack_c8);
          uStack_c8 = CONCAT44(uStack_c8._4_4_,
                               *(float *)(param_1 + 0x70) +
                               fVar7 + fVar8 + (float)uStack_c8 * *(float *)(param_1 + 0x60));
          memcpy(auStack_13c,&local_d0,0x6c);
          UnityEngine_UI_VertexHelper__SetUIVertex(param_2,auStack_13c,iVar4,0);
          iVar4 = iVar4 + 1;
        } while (iVar1 != iVar4);
      }
    }
  }
  return;
}

