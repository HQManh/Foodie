// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$Decide
// address: 0x4411544
// body: available
// range: 0x4411544-0x44120f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44120f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_EstimatorBotScorer__Decide
               (undefined4 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               long *param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  ulong local_e0;
  long local_d0;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  
  if ((DAT_09517f00 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181ea8);
    FUN_03f5c2a4(&DAT_091c93d0);
    FUN_03f5c2a4(&DAT_091c9a30);
    FUN_03f5c2a4(&DAT_091c9fc0);
    FUN_03f5c2a4(&DAT_091cac28);
    FUN_03f5c2a4(&DAT_091cb0f0);
    FUN_03f5c2a4(&DAT_091cb3f8);
    FUN_03f5c2a4(&DAT_091a2338);
    FUN_03f5c2a4(&DAT_091a2368);
    FUN_03f5c2a4(&DAT_091a2370);
    FUN_03f5c2a4(&DAT_091a2340);
    FUN_03f5c2a4(&DAT_091a2348);
    FUN_03f5c2a4(&DAT_091a2378);
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_091784d0);
    FUN_03f5c2a4(&DAT_091784c8);
    FUN_03f5c2a4(&DAT_09178480);
    FUN_03f5c2a4(&DAT_091ab4a8);
    FUN_03f5c2a4(&DAT_091ab4e8);
    FUN_03f5c2a4(&DAT_091ab448);
    FUN_03f5c2a4(&DAT_091ab4d8);
    FUN_03f5c2a4(&DAT_091ab498);
    FUN_03f5c2a4(&DAT_091ab4f0);
    FUN_03f5c2a4(&DAT_091ab4b0);
    FUN_03f5c2a4(&DAT_091ab4f8);
    FUN_03f5c2a4(&DAT_0917bd40);
    FUN_03f5c2a4(&DAT_0917bd30);
    FUN_03f5c2a4(&DAT_0917bd20);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09189a90);
    FUN_03f5c2a4(&DAT_091e9b60);
    FUN_03f5c2a4(&DAT_091e9b68);
    FUN_03f5c2a4(&DAT_091e9b70);
    FUN_03f5c2a4(&DAT_091e9b78);
    FUN_03f5c2a4(&DAT_091e9ba0);
    FUN_03f5c2a4(&DAT_091e9ba8);
    FUN_03f5c2a4(&DAT_091e9bb0);
    FUN_03f5c2a4(&DAT_091e9bb8);
    FUN_03f5c2a4(&DAT_09190668);
    FUN_03f5c2a4(&DAT_09190660);
    DAT_09517f00 = 1;
  }
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_09190668);
  System_Object___ctor(lVar4,0);
  if (lVar4 == 0) goto LAB_044120f4;
  *(undefined8 *)(lVar4 + 0x10) = param_7;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),param_7);
  plVar11 = (long *)(lVar4 + 0x18);
  *plVar11 = param_3;
  thunk_FUN_03f5d7b8(plVar11,param_3);
  puVar12 = (undefined8 *)(lVar4 + 0x20);
  *puVar12 = param_4;
  thunk_FUN_03f5d7b8(puVar12,param_4);
  *(long *)(lVar4 + 0x28) = param_2;
  thunk_FUN_03f5d7b8((long *)(lVar4 + 0x28),param_2);
  lVar8 = *plVar11;
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x1c) == '\0')) {
    return 0;
  }
  lVar8 = *(long *)(lVar8 + 0x30);
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_03f9944c(DAT_0917bd40);
    FUN_057e0400(lVar8,DAT_091ab4d8);
  }
  if (*(int *)(DAT_09190660 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar9 = *(undefined8 **)(DAT_09190660 + 0xb8);
  lVar10 = puVar9[1];
  if (lVar10 == 0) {
    if (*(int *)(DAT_09190660 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar9 = *(undefined8 **)(DAT_09190660 + 0xb8);
    }
    uVar15 = *puVar9;
    lVar10 = thunk_FUN_03f9944c(DAT_091784c8);
    FUN_05322d94(lVar10,uVar15,DAT_091e9b60,0);
    plVar5 = (long *)(*(long *)(DAT_09190660 + 0xb8) + 8);
    *plVar5 = lVar10;
    thunk_FUN_03f5d7b8(plVar5,lVar10);
  }
  uVar15 = FUN_04b0cafc(lVar8,lVar10,DAT_091cb3f8);
  uVar6 = thunk_FUN_03f9944c(DAT_091784c8);
  FUN_05322d94(uVar6,lVar4,DAT_091e9ba0,0);
  uVar15 = FUN_04b0cafc(uVar15,uVar6,DAT_091cb3f8);
  uVar6 = thunk_FUN_03f9944c(DAT_091784c8);
  FUN_05322d94(uVar6,lVar4,DAT_091e9ba8,0);
  uVar15 = FUN_04b0cafc(uVar15,uVar6,DAT_091cb3f8);
  uVar6 = thunk_FUN_03f9944c(DAT_091784c8);
  FUN_05322d94(uVar6,lVar4,DAT_091e9bb0,0);
  uVar15 = FUN_04b0cafc(uVar15,uVar6,DAT_091cb3f8);
  if (*(int *)(DAT_09190660 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09190660);
  }
  puVar9 = *(undefined8 **)(DAT_09190660 + 0xb8);
  lVar8 = puVar9[2];
  if (lVar8 == 0) {
    if (*(int *)(DAT_09190660 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09190660);
      puVar9 = *(undefined8 **)(DAT_09190660 + 0xb8);
    }
    uVar6 = *puVar9;
    lVar8 = thunk_FUN_03f9944c(DAT_091784d0);
    FUN_053239c8(lVar8,uVar6,DAT_091e9b68,0);
    plVar5 = (long *)(*(long *)(DAT_09190660 + 0xb8) + 0x10);
    *plVar5 = lVar8;
    thunk_FUN_03f5d7b8(plVar5,lVar8);
  }
  uVar15 = FUN_04aeab54(uVar15,lVar8,DAT_091c9fc0);
  lVar8 = FUN_04b08b78(uVar15,DAT_091cb0f0);
  if (lVar8 == 0) goto LAB_044120f4;
  if (*(int *)(lVar8 + 0x18) == 0) {
    return 0;
  }
  if (*plVar11 == 0) goto LAB_044120f4;
  lVar10 = *(long *)(*plVar11 + 0x38);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) {
    lVar10 = thunk_FUN_03f9944c(DAT_0917bd30);
    FUN_057e0400(lVar10,DAT_091ab498);
    if (lVar10 == 0) goto LAB_044120f4;
  }
  FUN_057e185c(&local_c8,lVar10,DAT_091ab4a8);
  iVar14 = 0;
  iVar2 = 0;
  puStack_88 = puStack_c0;
  local_90 = local_c8;
  local_80 = local_b8;
  local_c8 = 0;
  puStack_c0 = &local_90;
LAB_04411abc:
  while (uVar7 = FUN_071bd28c(&local_90,DAT_091a2340), (uVar7 & 1) != 0) {
    if (local_80 == 0) goto LAB_04411af4;
    if (*(int *)(local_80 + 0x10) == 0) goto LAB_04411aec;
    if (*(int *)(local_80 + 0x10) == 3) {
      iVar14 = iVar14 + 1;
    }
  }
  FUN_071bd288(&local_90,DAT_091a2338);
  if (*plVar11 == 0) goto LAB_044120f4;
  lVar16 = *(long *)(*plVar11 + 0x58);
  if (lVar16 == 0) {
    lVar16 = thunk_FUN_03f9944c(DAT_0917bd20);
    FUN_057e0400(lVar16,DAT_091ab448);
  }
  if (*(int *)(DAT_09190660 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar9 = *(undefined8 **)(DAT_09190660 + 0xb8);
  lVar13 = puVar9[3];
  if (lVar13 == 0) {
    if (*(int *)(DAT_09190660 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar9 = *(undefined8 **)(DAT_09190660 + 0xb8);
    }
    uVar15 = *puVar9;
    lVar13 = thunk_FUN_03f9944c(DAT_09178480);
    FUN_05322d94(lVar13,uVar15,DAT_091e9b70,0);
    plVar5 = (long *)(*(long *)(DAT_09190660 + 0xb8) + 0x18);
    *plVar5 = lVar13;
    thunk_FUN_03f5d7b8(plVar5,lVar13);
  }
  uVar7 = FUN_04ab6f28(lVar16,lVar13,DAT_091c93d0);
  lVar16 = *(long *)(param_2 + 0x28);
  if (*(int *)(param_2 + 0x20) == 1) {
    if (lVar16 == 0) goto LAB_044120f4;
    fVar17 = *(float *)(lVar16 + 100);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar17 = (float)System_Math__Min(0x3f59999a,fVar17 + 0.15,0);
    if ((uVar7 & 1) != 0) goto LAB_04411c80;
LAB_04411c8c:
    if (*(int *)(lVar10 + 0x18) < 1) {
      bVar1 = false;
    }
    else {
      bVar1 = (float)iVar2 <= fVar17 * (float)*(int *)(lVar10 + 0x18);
    }
  }
  else {
    if (lVar16 == 0) goto LAB_044120f4;
    if ((uVar7 & 1) == 0) {
      fVar17 = *(float *)(lVar16 + 100);
      goto LAB_04411c8c;
    }
LAB_04411c80:
    bVar1 = true;
  }
  uVar15 = CookingGraph_EstimatorBotScorer__BuildPickupValues
                     (param_2,*plVar11,*puVar12,param_5,bVar1);
  if (*(long *)(param_2 + 0x28) != 0) {
    iVar2 = *(int *)(*(long *)(param_2 + 0x28) + 0x78);
    if (iVar2 < 1) {
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_044120f4;
      lVar10 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
      if (lVar10 == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = *(undefined4 *)(lVar10 + 0x2c);
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_Math__Max(1,uVar3,0);
    }
    if (param_6 == (long *)0x0) {
      if (*(long *)(param_2 + 0x28) == 0) goto LAB_044120f4;
      uVar3 = *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x80);
      param_6 = (long *)thunk_FUN_03f9944c(DAT_09189a90);
      System_Random___ctor(param_6,uVar3,0);
    }
    if (*(int *)(DAT_09184160 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = CookingGraph_EstimatorBotScorer__UsesRandomChoice(param_1,param_6);
    if ((uVar7 & 1) == 0) {
      FUN_057e185c(&local_c8,lVar8,DAT_091ab4e8);
      local_d0 = 0;
      puStack_a8 = puStack_c0;
      local_b0 = local_c8;
      local_a0 = local_b8;
      local_c8 = 0;
      local_e0 = 0xffffffff;
      puStack_c0 = &local_b0;
      fVar17 = 0.0;
      while (uVar7 = FUN_071bd28c(&local_b0,DAT_091a2370), (uVar7 & 1) != 0) {
        lVar10 = local_a0;
        uVar7 = CookingGraph_EstimatorBotScorer__ScoreCandidate
                          (param_2,local_a0,*plVar11,uVar15,iVar14,bVar1,iVar2,*puVar12);
        if (fVar17 < (float)uVar7) {
          local_e0 = uVar7 >> 0x20;
          local_d0 = lVar10;
          fVar17 = (float)uVar7;
        }
      }
      FUN_071bd288(&local_b0,DAT_091a2368);
      if (local_d0 != 0) {
        lVar4 = thunk_FUN_03f9944c(DAT_09181ea8);
        *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
        *(undefined4 *)(lVar4 + 0x30) = 0x3f800000;
        System_Object___ctor(lVar4,0);
        *(long *)(lVar4 + 0x10) = local_d0;
        thunk_FUN_03f5d7b8((long *)(lVar4 + 0x10),local_d0);
        *(float *)(lVar4 + 0x18) = fVar17;
        *(undefined1 *)(lVar4 + 0x1c) = 0;
        *(int *)(lVar4 + 0x20) = (int)local_e0;
        return lVar4;
      }
      if (bVar1 == false) {
        if (param_6 == (long *)0x0) goto LAB_044120f4;
        uVar3 = (**(code **)(*param_6 + 0x1a8))
                          (param_6,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)(*param_6 + 0x1b0));
        uVar15 = FUN_057e0998(lVar8,uVar3,DAT_091ab4f8);
      }
      else {
        uVar15 = thunk_FUN_03f9944c(DAT_091784d0);
        FUN_053239c8(uVar15,lVar4,DAT_091e9bb8,0);
        uVar15 = FUN_04aeab54(lVar8,uVar15,DAT_091c9fc0);
        if (*(int *)(DAT_09190660 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09190660);
        }
        puVar12 = *(undefined8 **)(DAT_09190660 + 0xb8);
        lVar4 = puVar12[4];
        if (lVar4 == 0) {
          if (*(int *)(DAT_09190660 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09190660);
            puVar12 = *(undefined8 **)(DAT_09190660 + 0xb8);
          }
          uVar6 = *puVar12;
          lVar4 = thunk_FUN_03f9944c(DAT_091784d0);
          FUN_053239c8(lVar4,uVar6,DAT_091e9b78,0);
          plVar5 = (long *)(*(long *)(DAT_09190660 + 0xb8) + 0x20);
          *plVar5 = lVar4;
          thunk_FUN_03f5d7b8(plVar5,lVar4);
        }
        uVar15 = FUN_04b038e4(uVar15,lVar4,DAT_091cac28);
        uVar15 = FUN_04ae1388(uVar15,DAT_091c9a30);
      }
      lVar4 = thunk_FUN_03f9944c(DAT_09181ea8);
      *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
      *(undefined4 *)(lVar4 + 0x30) = 0x3f800000;
      System_Object___ctor(lVar4,0);
      *(undefined8 *)(lVar4 + 0x10) = uVar15;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar15);
      *(undefined1 *)(lVar4 + 0x1c) = 1;
      lVar8 = *plVar11;
      if (*(int *)(DAT_09184160 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = CookingGraph_EstimatorBotScorer__FirstCustomer(lVar8);
      *(undefined4 *)(lVar4 + 0x20) = uVar3;
      return lVar4;
    }
    if (param_6 != (long *)0x0) {
      uVar3 = (**(code **)(*param_6 + 0x1a8))
                        (param_6,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)(*param_6 + 0x1b0));
      uVar6 = FUN_057e0998(lVar8,uVar3,DAT_091ab4f8);
      uVar15 = CookingGraph_EstimatorBotScorer__ScoreCandidate
                         (param_2,uVar6,*plVar11,uVar15,iVar14,bVar1,iVar2,*puVar12);
      lVar4 = thunk_FUN_03f9944c(DAT_09181ea8);
      *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
      *(undefined4 *)(lVar4 + 0x30) = 0x3f800000;
      System_Object___ctor(lVar4,0);
      *(undefined8 *)(lVar4 + 0x10) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar6);
      *(int *)(lVar4 + 0x18) = (int)uVar15;
      *(undefined1 *)(lVar4 + 0x1c) = 1;
      *(int *)(lVar4 + 0x20) = (int)((ulong)uVar15 >> 0x20);
      return lVar4;
    }
  }
LAB_044120f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_04411aec:
  if (*(char *)(local_80 + 0x14) != '\0') {
LAB_04411af4:
    iVar2 = iVar2 + 1;
  }
  goto LAB_04411abc;
}

