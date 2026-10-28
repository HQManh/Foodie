// rea decompile_all
// name: CakeOrder.Home.HomeBuildingFadeScale$$BuildConfettiShots
// address: 0x4314ee8
// body: available
// range: 0x4314ee8-0x431532f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4315328 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431532c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Home_HomeBuildingFadeScale__BuildConfettiShots
               (float param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  
  if ((DAT_095175e0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175bd8);
    FUN_03f5c2a4(&DAT_091a4d48);
    FUN_03f5c2a4(&DAT_091a4d50);
    FUN_03f5c2a4(&DAT_091a4d58);
    FUN_03f5c2a4(&DAT_091b2f18);
    FUN_03f5c2a4(&DAT_091b1a58);
    FUN_03f5c2a4(&DAT_091b2f28);
    FUN_03f5c2a4(&DAT_091b2f10);
    FUN_03f5c2a4(&DAT_091b1a68);
    FUN_03f5c2a4(&DAT_091b1a70);
    FUN_03f5c2a4(&DAT_0917d4a8);
    FUN_03f5c2a4(&DAT_091eb178);
    FUN_03f5c2a4(&DAT_091912f0);
    DAT_095175e0 = 1;
  }
  uVar21 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  fVar17 = param_1 * 0.85;
  if (*(float *)(param_2 + 200) <= param_1 * 0.85) {
    fVar17 = *(float *)(param_2 + 200);
  }
  fVar23 = 0.1;
  if (0.1 <= fVar17) {
    fVar23 = fVar17;
  }
  lVar6 = thunk_FUN_03f9944c(DAT_0917d4a8);
  FUN_0594a924(lVar6,DAT_091b2f10);
  if (param_3 != 0) {
    FUN_058b25b0(&local_f0,param_3,DAT_091b1a58);
    local_d0 = local_f0;
    local_c0 = local_e0;
    uStack_bc = uStack_dc;
    local_f0 = 0;
    puStack_c8 = uStack_e8;
    local_b8 = uStack_d8;
    uStack_e8 = &local_d0;
    while (uVar7 = FUN_071fffd0(&local_d0,DAT_091a4d50), uVar22 = uStack_bc, uVar14 = local_c0,
          (uVar7 & 1) != 0) {
      uVar2 = (undefined4)local_b8;
      iVar3 = UnityEngine_Random__Range
                        (*(undefined4 *)(param_2 + 0xbc),*(int *)(param_2 + 0xc0) + 1,0);
      if (0 < iVar3) {
        do {
          uVar13 = UnityEngine_Random__Range(0,fVar23,0);
          lVar11 = DAT_091b2f18;
          if (lVar6 == 0) {
LAB_04315328:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_04315328;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar1 * 0x14;
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar9 + 0x20) = uVar13;
            *(undefined4 *)(lVar9 + 0x24) = uVar14;
            *(undefined4 *)(lVar9 + 0x28) = uVar22;
            *(undefined4 *)(lVar9 + 0x2c) = uVar2;
            *(undefined4 *)(lVar9 + 0x30) = 0x3f800000;
          }
          else {
            uStack_a0 = uVar14;
            local_9c = uVar22;
            uStack_98 = uVar2;
            local_94 = 0x3f800000;
            local_a4 = uVar13;
            FUN_0594b22c(lVar6,&local_a4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    FUN_071fffcc(&local_d0,DAT_091a4d48);
    iVar5 = *(int *)(param_3 + 0x18);
    iVar3 = iVar5;
    if (iVar5 < 0) {
      iVar3 = iVar5 + 1;
    }
    if (1 < iVar5) {
      iVar3 = iVar3 >> 1;
      do {
        fVar17 = (float)uVar21;
        iVar4 = UnityEngine_Random__Range(0,*(undefined4 *)(param_3 + 0x18),0);
        iVar5 = UnityEngine_Random__Range(0,*(int *)(param_3 + 0x18) + -1,0);
        if (iVar4 <= iVar5) {
          iVar5 = iVar5 + 1;
        }
        fVar18 = fVar23;
        uVar14 = UnityEngine_Random__Range(0,0);
        fVar15 = (float)FUN_058b15e4(param_3,iVar4,DAT_091b1a70);
        fVar19 = fVar18;
        fVar20 = fVar17;
        fVar16 = (float)FUN_058b15e4(param_3,iVar5,DAT_091b1a70);
        lVar11 = DAT_091b2f18;
        if (lVar6 == 0) goto LAB_0431532c;
        lVar9 = *(long *)(lVar6 + 0x10);
        uVar22 = *(undefined4 *)(param_2 + 0xc4);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_0431532c;
        uVar1 = *(uint *)(lVar6 + 0x18);
        fVar15 = (fVar15 + fVar16) * 0.5;
        uVar21 = (ulong)(uint)fVar15;
        fVar19 = (fVar18 + fVar19) * 0.5;
        fVar17 = (fVar17 + fVar20) * 0.5;
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar1 * 0x14;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar9 + 0x20) = uVar14;
          *(float *)(lVar9 + 0x24) = fVar15;
          *(float *)(lVar9 + 0x28) = fVar19;
          *(float *)(lVar9 + 0x2c) = fVar17;
          *(undefined4 *)(lVar9 + 0x30) = uVar22;
        }
        else {
          local_f0 = CONCAT44(fVar15,uVar14);
          uStack_e8 = (undefined8 *)CONCAT44(fVar17,fVar19);
          local_e0 = uVar22;
          FUN_0594b22c(lVar6,&local_f0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (*(int *)(DAT_091912f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar10 = *(undefined8 **)(DAT_091912f0 + 0xb8);
    lVar11 = puVar10[1];
    if (lVar11 == 0) {
      if (*(int *)(DAT_091912f0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar10 = *(undefined8 **)(DAT_091912f0 + 0xb8);
      }
      uVar12 = *puVar10;
      lVar11 = thunk_FUN_03f9944c(DAT_09175bd8);
      FUN_06d4aa98(lVar11,uVar12,DAT_091eb178,0);
      plVar8 = (long *)(*(long *)(DAT_091912f0 + 0xb8) + 8);
      *plVar8 = lVar11;
      thunk_FUN_03f5d7b8(plVar8,lVar11);
    }
    if (lVar6 != 0) {
      FUN_0594d09c(lVar6,lVar11,DAT_091b2f28);
      return lVar6;
    }
  }
LAB_0431532c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

