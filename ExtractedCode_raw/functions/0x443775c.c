// rea decompile_all
// name: CookingGraph.IngredientQueueGenerator$$LeavesFor
// address: 0x443775c
// body: available
// range: 0x443775c-0x4437e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4437bac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437e60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437e64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437e68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437e6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437e70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437e74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437e78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437e7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437e84 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04437c30) */
/* WARNING: Removing unreachable block (ram,0x04437e80) */

undefined8 CookingGraph_IngredientQueueGenerator__LeavesFor(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_b8;
  long **pplStack_b0;
  long local_a8;
  undefined8 local_a0;
  long **pplStack_98;
  long local_90;
  long *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_09517fcc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d058);
    FUN_03f5c2a4(&DAT_0919d060);
    FUN_03f5c2a4(&DAT_0919d050);
    FUN_03f5c2a4(&DAT_0919d070);
    FUN_03f5c2a4(&DAT_091762c8);
    FUN_03f5c2a4(&DAT_091ca4a8);
    FUN_03f5c2a4(&DAT_091cb290);
    FUN_03f5c2a4(&DAT_091cb568);
    FUN_03f5c2a4(&DAT_091a2dc8);
    FUN_03f5c2a4(&DAT_091a2dd0);
    FUN_03f5c2a4(&DAT_091a2dd8);
    FUN_03f5c2a4(&DAT_09178e58);
    FUN_03f5c2a4(&DAT_09178980);
    FUN_03f5c2a4(&DAT_091a8258);
    FUN_03f5c2a4(&DAT_09179e10);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a6b0);
    FUN_03f5c2a4(&DAT_0917ad90);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091acf30);
    FUN_03f5c2a4(&DAT_091b3090);
    FUN_03f5c2a4(&DAT_0917d500);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091895d0);
    FUN_03f5c2a4(&DAT_091eb9a8);
    FUN_03f5c2a4(&DAT_091eb9b0);
    FUN_03f5c2a4(&DAT_09191798);
    DAT_09517fcc = 1;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = (long *)0x0;
  pplStack_98 = (long **)0x0;
  local_a0 = 0;
  local_90 = 0;
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x44);
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Math__Max(1,uVar2,0);
  local_68 = CONCAT44(local_68._4_4_,uVar2);
  lVar3 = thunk_FUN_03f9944c(DAT_091762c8);
  FUN_06fd76bc(lVar3,DAT_0919d050);
  local_78 = lVar3;
  thunk_FUN_03f5d7b8(&local_78,lVar3);
  if (param_1 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(DAT_09191798 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar7 = *(undefined8 **)(DAT_09191798 + 0xb8);
    lVar3 = puVar7[3];
    if (lVar3 == 0) {
      if (*(int *)(DAT_09191798 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar7 = *(undefined8 **)(DAT_09191798 + 0xb8);
      }
      uVar11 = *puVar7;
      lVar3 = thunk_FUN_03f9944c(DAT_09178e58);
      FUN_05322d94(lVar3,uVar11,DAT_091eb9a8,0);
      plVar4 = (long *)(*(long *)(DAT_09191798 + 0xb8) + 0x18);
      *plVar4 = lVar3;
      thunk_FUN_03f5d7b8(plVar4,lVar3);
    }
    plVar4 = (long *)FUN_04b0cafc(uVar10,lVar3,DAT_091cb568);
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a6b0) {
            puVar7 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04437a70;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a6b0,0);
LAB_04437a70:
      plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
      pplStack_b0 = &local_80;
      local_b8 = 0;
      do {
        local_80 = plVar4;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04437afc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_04437afc:
        uVar8 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        plVar4 = local_80;
        if ((uVar8 & 1) == 0) {
          if (local_80 == (long *)0x0) goto LAB_04437c24;
          lVar3 = *local_80;
          uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar8 == 0) goto LAB_04437bfc;
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_04437be4;
        }
        if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *local_80;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917ad90) {
              puVar7 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04437b60;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(local_80,DAT_0917ad90,0);
LAB_04437b60:
        lVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = FUN_06fd8648(local_78,*(undefined8 *)(lVar3 + 0x18),DAT_0919d060);
        plVar4 = local_80;
        if ((uVar8 & 1) == 0) {
          if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fd8454(local_78,*(undefined8 *)(lVar3 + 0x18),lVar3,DAT_0919d058);
          plVar4 = local_80;
        }
      } while( true );
    }
  }
  goto LAB_04437e7c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_04437be4:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04437c18;
    }
  }
LAB_04437bfc:
  puVar7 = (undefined8 *)FUN_03f95da8(local_80,DAT_09185a58,0);
LAB_04437c18:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
LAB_04437c24:
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_057e185c(&local_b8,*(long *)(param_1 + 0x90),DAT_091acf30);
    local_90 = local_a8;
    pplStack_98 = pplStack_b0;
    local_a0 = local_b8;
    local_b8 = 0;
    pplStack_b0 = (long **)&local_a0;
    while( true ) {
      uVar8 = FUN_071bd28c(&local_a0,DAT_091a2dd0);
      lVar1 = local_78;
      lVar3 = local_90;
      if ((uVar8 & 1) == 0) {
        FUN_071bd288(&local_a0,DAT_091a2dc8);
        uVar10 = thunk_FUN_03f9944c(DAT_0917d500);
        FUN_057e0400(uVar10,DAT_091b3090);
        local_70 = uVar10;
        thunk_FUN_03f5d7b8(&local_70,uVar10);
        uVar10 = thunk_FUN_03f9944c(DAT_09179e10);
        FUN_053eb530(uVar10,DAT_091a8258);
        CookingGraph_IngredientQueueGenerator__<LeavesFor>g__Walk_5_0(param_2,1,uVar10,&local_78);
        return local_70;
      }
      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = *(undefined8 *)(local_90 + 0x18);
      lVar5 = thunk_FUN_03f9944c(DAT_091895d0);
      CookingGraph_ProcessEdgeAssetData___ctor(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      thunk_FUN_03f5d7b8();
      lVar6 = DAT_09191798;
      *(undefined4 *)(lVar5 + 0x28) = 1;
      uVar11 = *(undefined8 *)(lVar3 + 0x28);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = DAT_09191798;
      }
      puVar7 = *(undefined8 **)(lVar6 + 0xb8);
      lVar3 = puVar7[4];
      if (lVar3 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar7 = *(undefined8 **)(DAT_09191798 + 0xb8);
        }
        uVar12 = *puVar7;
        lVar3 = thunk_FUN_03f9944c(DAT_09178980);
        FUN_05324070(lVar3,uVar12,DAT_091eb9b0,0);
        plVar4 = (long *)(*(long *)(DAT_09191798 + 0xb8) + 0x20);
        *plVar4 = lVar3;
        thunk_FUN_03f5d7b8(plVar4,lVar3);
      }
      uVar11 = FUN_04af8044(uVar11,lVar3,DAT_091ca4a8);
      uVar11 = FUN_04b08b78(uVar11,DAT_091cb290);
      *(undefined8 *)(lVar5 + 0x20) = uVar11;
      thunk_FUN_03f5d7b8();
      if (lVar1 == 0) break;
      FUN_06fd8440(lVar1,uVar10,lVar5,DAT_0919d070);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04437e7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

