// rea decompile_all
// name: CakeOrder.InGame.VoronoiSpawner$$ClipPolygon
// address: 0x42b3540
// body: available
// range: 0x42b3540-0x42b37ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b37a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_VoronoiSpawner__ClipPolygon
               (float param_1,ulong param_2,float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar4 = (float)param_2;
  if ((DAT_095172b6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091b19a0);
    FUN_03f5c2a4(&DAT_091b19e0);
    FUN_03f5c2a4(&DAT_091b19e8);
    FUN_03f5c2a4(&DAT_0917d050);
    DAT_095172b6 = 1;
  }
  lVar11 = thunk_FUN_03f9944c(DAT_0917d050);
  FUN_058abd7c(lVar11,DAT_091b19a0);
  if (param_6 != 0) {
    if (0 < *(int *)(param_6 + 0x18)) {
      iVar13 = 0;
      do {
        fVar18 = (float)param_2;
        fVar14 = (float)FUN_058ac314(param_6,iVar13,DAT_091b19e8);
        iVar1 = *(int *)(param_6 + 0x18);
        iVar13 = iVar13 + 1;
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = iVar13 / iVar1;
        }
        fVar17 = fVar18;
        fVar15 = (float)FUN_058ac314(param_6,iVar13 - iVar3 * iVar1,DAT_091b19e8);
        lVar5 = DAT_091b19b8;
        fVar19 = param_3 * (fVar14 - param_1) + param_4 * (fVar18 - fVar4);
        if (fVar19 <= 0.0) {
          if (lVar11 == 0) goto LAB_042b37a8;
          lVar12 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_042b37a8;
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar2 * 8;
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            *(float *)(lVar12 + 0x20) = fVar14;
            *(float *)(lVar12 + 0x24) = fVar18;
          }
          else {
            FUN_058ac614(fVar14,fVar18,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar5 = DAT_091b19b8;
        fVar16 = param_3 * (fVar15 - param_1) + param_4 * (fVar17 - fVar4);
        param_2 = 0;
        bVar7 = false;
        bVar9 = true;
        if (0.0 < fVar16) {
          bVar7 = false;
          bVar9 = true;
          if (!NAN(fVar19)) {
            bVar7 = fVar19 == 0.0;
            bVar9 = 0.0 <= fVar19;
          }
        }
        bVar6 = false;
        bVar8 = true;
        bVar10 = false;
        if (fVar16 <= 0.0) {
          bVar6 = false;
          bVar8 = false;
          bVar10 = true;
          if (!NAN(fVar19)) {
            bVar6 = fVar19 < 0.0;
            bVar8 = fVar19 == 0.0;
            bVar10 = false;
          }
        }
        if ((!bVar8 && bVar6 == bVar10) || (!bVar9 || bVar7)) {
          if (lVar11 == 0) goto LAB_042b37a8;
          lVar12 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_042b37a8;
          uVar2 = *(uint *)(lVar11 + 0x18);
          fVar19 = fVar19 / (fVar19 - fVar16);
          fVar18 = fVar18 + (fVar17 - fVar18) * fVar19;
          param_2 = (ulong)(uint)fVar18;
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar2 * 8;
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            *(float *)(lVar12 + 0x20) = fVar14 + (fVar15 - fVar14) * fVar19;
            *(float *)(lVar12 + 0x24) = fVar18;
          }
          else {
            FUN_058ac614(lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while (iVar13 < *(int *)(param_6 + 0x18));
    }
    return lVar11;
  }
LAB_042b37a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

