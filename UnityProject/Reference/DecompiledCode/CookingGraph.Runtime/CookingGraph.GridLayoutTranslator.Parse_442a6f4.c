// rea decompile_all
// name: CookingGraph.GridLayoutTranslator$$Parse
// address: 0x442a6f4
// body: available
// range: 0x442a6f4-0x442ab53 inclusive
// range: 0x442ab58-0x442abef inclusive
// range: 0x442ac30-0x442aecb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442ab50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442abec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442ac5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442ac64 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442acac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442aec8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0442ac60) */
/* WARNING: Removing unreachable block (ram,0x0442abd8) */

long CookingGraph_GridLayoutTranslator__Parse(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  undefined8 local_88;
  long **pplStack_80;
  int local_74;
  int local_70;
  int local_6c;
  long *local_68;
  
  if ((DAT_09517f68 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cb480);
    FUN_03f5c2a4(&DAT_09178878);
    FUN_03f5c2a4(&DAT_09184ec8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4b8);
    FUN_03f5c2a4(&DAT_0917ab68);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091acf58);
    FUN_03f5c2a4(&DAT_091acf60);
    FUN_03f5c2a4(&DAT_091acf68);
    FUN_03f5c2a4(&DAT_091acf70);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091eaf28);
    FUN_03f5c2a4(&DAT_091910f8);
    DAT_09517f68 = 1;
  }
  local_68 = (long *)0x0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar14 = thunk_FUN_03f9944c();
    uVar15 = thunk_FUN_03fc39d4(&DAT_0921c7b8);
    System_ArgumentNullException___ctor(uVar14,uVar15,0);
    uVar15 = thunk_FUN_03fc39d4(&DAT_091ce330);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar14,uVar15);
  }
  lVar4 = CookingGraph_GridLayoutTranslator__Parse(param_1);
  if (param_2 == 0) goto LAB_0442ac5c;
  lVar12 = *(long *)(param_2 + 0x28);
  if (lVar12 == 0) {
    uVar14 = thunk_FUN_03fc39d4(&DAT_092076f8);
    iVar16 = 0;
    iVar17 = 0;
    uVar15 = 0;
  }
  else {
    iVar17 = *(int *)(lVar12 + 0x20);
    iVar16 = *(int *)(lVar12 + 0x24);
    if ((0 < iVar17) && (0 < iVar16)) {
      if (param_1 == 0) {
LAB_0442ac5c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar11 = iVar16 * iVar17;
      if (*(int *)(param_1 + 0x10) == 0) {
        if ((lVar4 == 0) || (lVar12 = *(long *)(lVar4 + 0x10), lVar12 == 0)) goto LAB_0442ac5c;
        iVar1 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
        }
        iVar1 = iVar11;
        if (0 < iVar11) {
          do {
            lVar13 = *(long *)(lVar4 + 0x10);
            uVar14 = thunk_FUN_03f9944c(DAT_09184ec8);
            CookingGraph_GridCellData___ctor();
            lVar12 = DAT_091acf58;
            if (lVar13 == 0) goto LAB_0442ac5c;
            lVar8 = *(long *)(lVar13 + 0x10);
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_0442ac5c;
            uVar2 = *(uint *)(lVar13 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar2 + 1;
              puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
              *puVar9 = uVar14;
              thunk_FUN_03f5d7b8(puVar9,uVar14);
            }
            else {
              FUN_057e0c68(lVar13,uVar14,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      else if (lVar4 == 0) goto LAB_0442ac5c;
      lVar12 = *(long *)(lVar4 + 0x10);
      if (lVar12 == 0) goto LAB_0442ac5c;
      if (*(int *)(lVar12 + 0x18) == iVar11) {
        iVar11 = 0;
LAB_0442a948:
        if (*(int *)(lVar12 + 0x18) <= iVar11) {
          *(int *)(lVar4 + 0x18) = iVar17;
          *(int *)(lVar4 + 0x1c) = iVar16;
          return lVar4;
        }
        lVar12 = FUN_057e0998(lVar12,iVar11,DAT_091acf70);
        if (lVar12 != 0) {
          uVar14 = *(undefined8 *)(lVar12 + 0x10);
          if (*(int *)(DAT_091910f8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar9 = *(undefined8 **)(DAT_091910f8 + 0xb8);
          lVar12 = puVar9[1];
          if (lVar12 == 0) {
            if (*(int *)(DAT_091910f8 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar9 = *(undefined8 **)(DAT_091910f8 + 0xb8);
            }
            uVar15 = *puVar9;
            lVar12 = thunk_FUN_03f9944c(DAT_09178878);
            FUN_05322d94(lVar12,uVar15,DAT_091eaf28,0);
            plVar5 = (long *)(*(long *)(DAT_091910f8 + 0xb8) + 8);
            *plVar5 = lVar12;
            thunk_FUN_03f5d7b8(plVar5,lVar12);
          }
          plVar5 = (long *)FUN_04b0cafc(uVar14,lVar12,DAT_091cb480);
          if (plVar5 != (long *)0x0) {
            lVar12 = *plVar5;
            uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917a4b8) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_0442aa60;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a4b8,0);
LAB_0442aa60:
            plVar5 = (long *)(*(code *)*puVar9)(plVar5,puVar9[1]);
            local_88 = 0;
            pplStack_80 = &local_68;
            do {
              local_68 = plVar5;
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar12 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar3 != 0) {
                piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                    puVar9 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_0442aac8;
                  }
                  uVar3 = uVar3 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar3 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_0442aac8:
              uVar3 = (*(code *)*puVar9)(plVar5,puVar9[1]);
              plVar5 = local_68;
              if ((uVar3 & 1) == 0) goto LAB_0442ab58;
              if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar12 = *local_68;
              uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar3 != 0) {
                piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_0917ab68) {
                    puVar9 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_0442ab2c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar3 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ab68,0);
LAB_0442ab2c:
              uVar14 = (*(code *)*puVar9)(plVar5,puVar9[1]);
              CookingGraph_GridLayoutTranslator__ResolveIngredientSlot
                        (uVar14,param_2,param_1,iVar11);
              plVar5 = local_68;
            } while( true );
          }
        }
        goto LAB_0442ac5c;
      }
      uVar14 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar14 = FUN_03f5c394(uVar14,5);
      FUN_039b1d98(lVar4);
      lVar4 = *(long *)(lVar4 + 0x10);
      FUN_039b1d98(lVar4);
      thunk_FUN_03fc39d4(&DAT_091acf68);
      local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(lVar4 + 0x18));
      uVar15 = FUN_03f5c42c(DAT_09535420,&local_88);
      FUN_039b1d98(uVar14);
      FUN_039b0da0(uVar14,uVar15);
      FUN_039af17c(uVar14,0,uVar15);
      FUN_039b1d98(param_2);
      lVar4 = *(long *)(param_2 + 0x28);
      FUN_039b1d98(lVar4);
      uVar15 = *(undefined8 *)(lVar4 + 0x10);
      FUN_039b0da0(uVar14,uVar15);
      FUN_039af17c(uVar14,1,uVar15);
      local_6c = iVar17;
      uVar15 = FUN_03f5c42c(DAT_09535420,&local_6c);
      FUN_039b0da0(uVar14,uVar15);
      FUN_039af17c(uVar14,2,uVar15);
      local_70 = iVar16;
      uVar15 = FUN_03f5c42c(DAT_09535420,&local_70);
      FUN_039b0da0(uVar14,uVar15);
      FUN_039af17c(uVar14,3,uVar15);
      local_74 = iVar11;
      uVar15 = FUN_03f5c42c(DAT_09535420,&local_74);
      FUN_039b0da0(uVar14,uVar15);
      FUN_039af17c(uVar14,4,uVar15);
      uVar15 = thunk_FUN_03fc39d4(&DAT_092039b0);
      uVar14 = System_String__Format(uVar15,uVar14,0);
      goto LAB_0442ae8c;
    }
    uVar14 = thunk_FUN_03fc39d4(&DAT_092076f8);
    uVar15 = *(undefined8 *)(lVar12 + 0x10);
  }
  local_88 = CONCAT44(local_88._4_4_,iVar17);
  uVar6 = FUN_03f5c42c(DAT_09535420,&local_88);
  local_6c = iVar16;
  uVar7 = FUN_03f5c42c(DAT_09535420,&local_6c);
  uVar14 = System_String__Format(uVar14,uVar15,uVar6,uVar7,0);
LAB_0442ae8c:
  thunk_FUN_03fc39d4(&DAT_09182d98);
  uVar15 = thunk_FUN_03f9944c();
  CookingGraph_CookingGraphFormatException___ctor(uVar15,uVar14,0,param_1);
  uVar14 = thunk_FUN_03fc39d4(&DAT_091ce330);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar15,uVar14);
LAB_0442ab58:
  if (local_68 != (long *)0x0) {
    lVar12 = *local_68;
    uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185a58) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0442abc0;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_0442abc0:
    (*(code *)*puVar9)(plVar5,puVar9[1]);
  }
  lVar12 = *(long *)(lVar4 + 0x10);
  iVar11 = iVar11 + 1;
  if (lVar12 == 0) goto LAB_0442ac5c;
  goto LAB_0442a948;
}

