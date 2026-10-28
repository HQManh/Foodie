// rea decompile_all
// name: CakeOrder.InGame.VoronoiSpawner$$PrecalculateCells
// address: 0x42b251c
// body: available
// range: 0x42b251c-0x42b281f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b281c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_VoronoiSpawner__PrecalculateCells
               (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
  if ((DAT_095172b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195f08);
    FUN_03f5c2a4(&DAT_0919e300);
    FUN_03f5c2a4(&DAT_0919e310);
    FUN_03f5c2a4(&DAT_091affa0);
    FUN_03f5c2a4(&DAT_091b4180);
    FUN_03f5c2a4(&DAT_091b19e0);
    FUN_03f5c2a4(&DAT_091b19e8);
    DAT_095172b3 = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (FUN_06ef0694(*(long *)(param_1 + 0x20),DAT_0919e300), param_2 != 0)) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar8 = 0;
      do {
        uVar3 = CakeOrder_InGame_VoronoiSpawner__GetVoronoiPolygon(param_1,param_2,iVar8,param_3);
        fVar13 = *(float *)(param_1 + 0x1c);
        lVar4 = CakeOrder_InGame_VoronoiSpawner__ShrinkPolygon
                          (*(undefined4 *)(param_1 + 0x18),uVar3,uVar3);
        lVar5 = thunk_FUN_03f9944c(DAT_09195f08);
        CakeOrder_InGame_VoronoiSpawner_CachedCell___ctor();
        if (lVar4 == 0) goto LAB_042b281c;
        fVar17 = 0.0;
        if (1 < *(int *)(lVar4 + 0x18) + -1) {
          iVar9 = 1;
          do {
            fVar10 = (float)FUN_058ac314(lVar4,0,DAT_091b19e8);
            fVar14 = fVar13;
            fVar11 = (float)FUN_058ac314(lVar4,iVar9,DAT_091b19e8);
            iVar9 = iVar9 + 1;
            fVar15 = fVar14;
            fVar12 = (float)FUN_058ac314(lVar4,iVar9,DAT_091b19e8);
            lVar2 = DAT_091b4180;
            if ((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + 0x10), lVar6 == 0)) goto LAB_042b281c;
            lVar7 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_042b281c;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + (long)(int)uVar1 * 0x18;
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(float *)(lVar7 + 0x20) = fVar10;
              *(float *)(lVar7 + 0x24) = fVar13;
              *(float *)(lVar7 + 0x28) = fVar11;
              *(float *)(lVar7 + 0x2c) = fVar14;
              *(float *)(lVar7 + 0x30) = fVar12;
              *(float *)(lVar7 + 0x34) = fVar15;
            }
            else {
              local_b8 = fVar10;
              fStack_b4 = fVar13;
              local_b0 = fVar11;
              fStack_ac = fVar14;
              local_a8 = fVar12;
              fStack_a4 = fVar15;
              FUN_059e90ec(lVar6,&local_b8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            lVar2 = DAT_091affa0;
            lVar6 = *(long *)(lVar5 + 0x18);
            if (lVar6 == 0) goto LAB_042b281c;
            lVar7 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_042b281c;
            fVar16 = fVar15 - fVar13;
            uVar1 = *(uint *)(lVar6 + 0x18);
            fVar13 = (fVar13 - fVar14) * fVar12;
            fVar17 = fVar17 + ABS((fVar13 + fVar10 * (fVar14 - fVar15) + fVar11 * fVar16) * 0.5);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(float *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = fVar17;
            }
            else {
              FUN_05863604(fVar17,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          } while (iVar9 < *(int *)(lVar4 + 0x18) + -1);
        }
        if (lVar5 == 0) goto LAB_042b281c;
        lVar4 = *(long *)(param_1 + 0x20);
        *(float *)(lVar5 + 0x20) = fVar17;
        if (lVar4 == 0) goto LAB_042b281c;
        FUN_06ef04f8(lVar4,iVar8,lVar5,DAT_0919e310);
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_2 + 0x18));
    }
    return;
  }
LAB_042b281c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

