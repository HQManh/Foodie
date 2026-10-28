// rea decompile_all
// name: CookingGraph.CookingGraphIndex.<>c__DisplayClass24_0$$<Resolve>g__Walk|1
// address: 0x44835c8
// body: available
// range: 0x44835c8-0x4483c27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4483bb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4483c20 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4483c24 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingGraphIndex_<>c__DisplayClass24_0__<Resolve>g__Walk_1
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int local_44;
  
  if ((DAT_095180e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919cc78);
    FUN_03f5c2a4(&DAT_0919cc80);
    FUN_03f5c2a4(&DAT_091c9530);
    FUN_03f5c2a4(&DAT_091c9660);
    FUN_03f5c2a4(&DAT_091caf20);
    FUN_03f5c2a4(&DAT_091cb1a8);
    FUN_03f5c2a4(&DAT_091cb5f0);
    FUN_03f5c2a4(&DAT_091a3b30);
    FUN_03f5c2a4(&DAT_091a3b38);
    FUN_03f5c2a4(&DAT_091a3b40);
    FUN_03f5c2a4(&DAT_09179308);
    FUN_03f5c2a4(&DAT_0917ffd8);
    FUN_03f5c2a4(&DAT_09184f18);
    FUN_03f5c2a4(&DAT_09186c00);
    FUN_03f5c2a4(&DAT_091aa9d0);
    FUN_03f5c2a4(&DAT_091aecc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e7368);
    FUN_03f5c2a4(&DAT_0918f1e0);
    FUN_03f5c2a4(&DAT_091e7370);
    FUN_03f5c2a4(&DAT_0918f1e8);
    FUN_03f5c2a4(&DAT_091e7378);
    FUN_03f5c2a4(&DAT_0918f1f0);
    FUN_03f5c2a4(&DAT_091bec70);
    DAT_095180e6 = 1;
  }
  local_44 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_0918f1e0);
  System_Object___ctor(lVar5,0);
  if (lVar5 == 0) goto LAB_04483bb8;
  puVar11 = (undefined8 *)(lVar5 + 0x10);
  *puVar11 = param_3;
  thunk_FUN_03f5d7b8(puVar11,param_3);
  lVar6 = CookingGraph_CookingGraphIndex_<>c__DisplayClass24_0__<Resolve>g__Asset_0(param_1,param_2)
  ;
  plVar12 = (long *)(lVar5 + 0x18);
  *plVar12 = lVar6;
  thunk_FUN_03f5d7b8(plVar12,lVar6);
  if (param_2 == 0) goto LAB_04483bb8;
  if (*(int *)(param_2 + 0x10) != 2) {
    if (*(int *)(param_2 + 0x10) == 0) {
      lVar6 = thunk_FUN_03f9944c(DAT_0918f1e8);
      System_Object___ctor(lVar6,0);
      if (lVar6 != 0) {
        plVar12 = (long *)(lVar6 + 0x18);
        *plVar12 = lVar5;
        thunk_FUN_03f5d7b8(plVar12,lVar5);
        lVar5 = DAT_09186c00;
        if (*plVar12 != 0) {
          plVar12 = *(long **)(*plVar12 + 0x18);
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)0x0;
            *(undefined8 *)(lVar6 + 0x10) = 0;
          }
          else {
            plVar2 = plVar12;
            if (*plVar12 != DAT_09186c00) {
              plVar2 = (long *)0x0;
            }
            *(long **)(lVar6 + 0x10) = plVar2;
            if (*plVar12 != lVar5) {
              plVar12 = (long *)0x0;
            }
          }
          thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x10),plVar12);
          uVar14 = *(undefined8 *)(param_1 + 0x18);
          uVar8 = thunk_FUN_03f9944c(DAT_09179308);
          FUN_05322d94(uVar8,lVar6,DAT_091e7370,0);
          uVar8 = FUN_04b0cafc(uVar14,uVar8,DAT_091cb5f0);
          lVar5 = FUN_04b049e4(uVar8,DAT_091caf20);
          if (lVar5 != 0) {
            if (*(int *)(lVar5 + 0x18) != 1) {
              thunk_FUN_03fc39d4(&DAT_09181548);
              uVar8 = thunk_FUN_03f9944c();
              puVar9 = &DAT_09202d48;
              goto LAB_04483bf8;
            }
            lVar10 = *(long *)(param_1 + 0x20);
            local_70 = 0;
            puStack_68 = (undefined8 *)0x0;
            FUN_066cee64(&local_70,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar5 + 0x20),
                         DAT_091bec70);
            lVar5 = DAT_091aa9d0;
            if (lVar10 != 0) {
              lVar6 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar3 = *(uint *)(lVar10 + 0x18);
                if (uVar3 < *(uint *)(lVar6 + 0x18)) {
                  lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
                  *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                  puVar11 = (undefined8 *)(lVar6 + 0x20);
                  *puVar11 = local_70;
                  *(undefined8 **)(lVar6 + 0x28) = puStack_68;
                  thunk_FUN_03f5d7b8(puVar11,0);
                  return;
                }
                FUN_056be5bc(lVar10,local_70,puStack_68,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
        }
      }
      goto LAB_04483bb8;
    }
    if (*(long *)(param_1 + 0x30) != param_2) {
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      uVar8 = thunk_FUN_03f9944c(DAT_09179308);
      FUN_05322d94(uVar8,lVar5,DAT_091e7368,0);
      uVar7 = FUN_04ab6f28(uVar14,uVar8,DAT_091c9530);
      if ((uVar7 & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar8 = thunk_FUN_03f9944c();
        puVar9 = &DAT_09202d40;
        goto LAB_04483bf8;
      }
    }
LAB_04483a30:
    if (*(long *)(param_2 + 0x28) != 0) {
      FUN_057e185c(&local_60,*(long *)(param_2 + 0x28),DAT_091aecc0);
      local_70 = 0;
      puStack_68 = &local_60;
      while (uVar7 = FUN_071bd28c(&local_60,DAT_091a3b38), (uVar7 & 1) != 0) {
        CookingGraph_CookingGraphIndex_<>c__DisplayClass24_0__<Resolve>g__Walk_1
                  (param_1,local_50,*puVar11);
      }
      FUN_071bd288(&local_60,DAT_091a3b30);
      return;
    }
LAB_04483bb8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = thunk_FUN_03f9944c(DAT_0918f1f0);
  System_Object___ctor(lVar6,0);
  lVar5 = DAT_09184f18;
  if (lVar6 == 0) goto LAB_04483bb8;
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)0x0;
    *(undefined8 *)(lVar6 + 0x10) = 0;
  }
  else {
    plVar2 = plVar12;
    if (*plVar12 != DAT_09184f18) {
      plVar2 = (long *)0x0;
    }
    *(long **)(lVar6 + 0x10) = plVar2;
    if (*plVar12 != lVar5) {
      plVar12 = (long *)0x0;
    }
  }
  puVar13 = (undefined8 *)(lVar6 + 0x10);
  thunk_FUN_03f5d7b8(puVar13,plVar12);
  uVar8 = *puVar13;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = thunk_FUN_03f9944c(DAT_09179308);
    FUN_05322d94(uVar8,lVar6,DAT_091e7378,0);
    uVar7 = FUN_04ab6f28(uVar14,uVar8,DAT_091c9530);
    if ((uVar7 & 1) != 0) {
      uVar8 = *puVar11;
      lVar5 = FUN_03f5c394(DAT_0917ffd8,1);
      if (lVar5 == 0) goto LAB_04483bb8;
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar5 + 0x20) = *puVar13;
      thunk_FUN_03f5d7b8();
      uVar8 = FUN_04ad43f0(uVar8,lVar5,DAT_091c9660);
      uVar8 = FUN_04b08b78(uVar8,DAT_091cb1a8);
      *puVar11 = uVar8;
      thunk_FUN_03f5d7b8(puVar11,uVar8);
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 == 0) goto LAB_04483bb8;
      uVar8 = *puVar13;
      uVar7 = FUN_06fcbf70(lVar5,uVar8,&local_44,DAT_0919cc78);
      iVar1 = local_44;
      iVar4 = CookingGraph_CookingGraphIndex__<Resolve>g__LeavesIn_24_10(param_2);
      if ((uVar7 & 1) == 0) {
        iVar1 = 0;
      }
      FUN_06fca434(lVar5,uVar8,iVar4 + iVar1,DAT_0919cc80);
      goto LAB_04483a30;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar8 = thunk_FUN_03f9944c();
  puVar9 = &DAT_09212428;
LAB_04483bf8:
  uVar14 = thunk_FUN_03fc39d4(puVar9);
  System_ArgumentException___ctor(uVar8,uVar14,0);
  uVar14 = thunk_FUN_03fc39d4(&DAT_091e7360);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar14);
}

