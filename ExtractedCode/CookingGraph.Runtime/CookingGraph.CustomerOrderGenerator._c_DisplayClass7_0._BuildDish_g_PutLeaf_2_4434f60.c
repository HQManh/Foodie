// rea decompile_all
// name: CookingGraph.CustomerOrderGenerator.<>c__DisplayClass7_0$$<BuildDish>g__PutLeaf|2
// address: 0x4434f60
// body: available
// range: 0x4434f60-0x4435537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44353c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__PutLeaf_2
          (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long local_68;
  
  if ((DAT_09517fb9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fbd8);
    FUN_03f5c2a4(&DAT_0919fbe0);
    FUN_03f5c2a4(&DAT_0919cc80);
    FUN_03f5c2a4(&DAT_091c94d0);
    FUN_03f5c2a4(&DAT_091ca4c8);
    FUN_03f5c2a4(&DAT_091cabc8);
    FUN_03f5c2a4(&DAT_091789b8);
    FUN_03f5c2a4(&DAT_09178de8);
    FUN_03f5c2a4(&DAT_091aecb8);
    FUN_03f5c2a4(&DAT_091acfd0);
    FUN_03f5c2a4(&DAT_091ada20);
    FUN_03f5c2a4(&DAT_091acfd8);
    FUN_03f5c2a4(&DAT_091acfe0);
    FUN_03f5c2a4(&DAT_091e8308);
    FUN_03f5c2a4(&DAT_091e83d8);
    FUN_03f5c2a4(&DAT_0918f978);
    FUN_03f5c2a4(&DAT_0918f930);
    FUN_03f5c2a4(&DAT_091f9400);
    DAT_09517fb9 = 1;
  }
  local_68 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_0918f978);
  System_Object___ctor(lVar6,0);
  if (lVar6 != 0) {
    puVar14 = (undefined8 *)(lVar6 + 0x10);
    *puVar14 = param_3;
    thunk_FUN_03f5d7b8(puVar14,param_3);
    if (((*(long *)(param_1 + 0x28) != 0) &&
        (lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x30), lVar11 != 0)) &&
       (lVar11 = *(long *)(lVar11 + 0x10), lVar11 != 0)) {
      iVar2 = FUN_057e1a08(lVar11,*puVar14,DAT_091ada20);
      if (iVar2 < 0) {
        return 0;
      }
      if ((param_2 != 0) && (lVar11 = *(long *)(param_2 + 0x18), lVar11 != 0)) {
        iVar5 = 0;
        plVar8 = (long *)(param_1 + 0x30);
        do {
          iVar3 = *(int *)(lVar11 + 0x18);
          lVar15 = *plVar8;
          if (iVar3 <= iVar5) {
            if (0 < iVar3) {
              lVar11 = FUN_057e0998(lVar11,iVar3 + -1,DAT_091acfe0);
              if (lVar11 == 0) break;
              if (*(char *)(lVar11 + 0x48) != '\0') {
                if (lVar15 == 0) break;
                uVar10 = *(undefined8 *)(lVar15 + 0x28);
                uVar7 = thunk_FUN_03f9944c(DAT_09178de8);
                FUN_05322d94(uVar7,lVar6,DAT_091e83d8,0);
                uVar9 = FUN_04ab6f28(uVar10,uVar7,DAT_091c94d0);
                if ((uVar9 & 1) != 0) {
                  return 0;
                }
              }
              iVar5 = CookingGraph_CustomerOrderGenerator__Held
                                (*(undefined8 *)(param_1 + 0x40),lVar11);
              iVar3 = CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__GroupCapacity_0
                                (param_1,lVar11);
              if (iVar3 <= iVar5) {
                return 0;
              }
              lVar6 = *(long *)(param_1 + 0x40);
              iVar5 = CookingGraph_CustomerOrderGenerator__Held(lVar6,lVar11);
              if (lVar6 == 0) break;
              FUN_06fca434(lVar6,lVar11,iVar5 + 1,DAT_0919cc80);
            }
            if (lVar15 != 0) {
              lVar11 = *(long *)(lVar15 + 0x28);
              uVar7 = CookingGraph_CustomerOrderGenerator__Member(0,iVar2,*puVar14);
              lVar6 = DAT_091aecb8;
              if (lVar11 != 0) {
                lVar15 = *(long *)(lVar11 + 0x10);
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar15 != 0) {
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                    thunk_FUN_03f5d7b8();
                  }
                  else {
                    FUN_057e0c68(lVar11,uVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  return 1;
                }
              }
            }
            break;
          }
          uVar7 = FUN_04b02940(lVar11,iVar5 + 1,DAT_091cabc8);
          if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f930);
          }
          uVar10 = DAT_091f9400;
          puVar13 = *(undefined8 **)(DAT_0918f930 + 0xb8);
          lVar11 = puVar13[5];
          if (lVar11 == 0) {
            if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f930);
              puVar13 = *(undefined8 **)(DAT_0918f930 + 0xb8);
            }
            uVar16 = *puVar13;
            lVar11 = thunk_FUN_03f9944c(DAT_091789b8);
            FUN_05324070(lVar11,uVar16,DAT_091e8308,0);
            plVar8 = (long *)(*(long *)(DAT_0918f930 + 0xb8) + 0x28);
            *plVar8 = lVar11;
            thunk_FUN_03f5d7b8(plVar8,lVar11);
          }
          uVar7 = FUN_04af8044(uVar7,lVar11,DAT_091ca4c8);
          uVar7 = System_String__Join(uVar10,uVar7,0);
          if (*(long *)(param_1 + 0x38) == 0) break;
          uVar9 = FUN_06fd9fbc(*(long *)(param_1 + 0x38),uVar7,&local_68,DAT_0919fbe0);
          if ((uVar9 & 1) == 0) {
            if (iVar5 != 0) {
              if (*(long *)(param_2 + 0x18) == 0) break;
              uVar10 = FUN_057e0998(*(long *)(param_2 + 0x18),iVar5 + -1,DAT_091acfe0);
              iVar3 = CookingGraph_CustomerOrderGenerator__Held
                                (*(undefined8 *)(param_1 + 0x40),uVar10);
              iVar4 = CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__GroupCapacity_0
                                (param_1,uVar10);
              if (iVar4 <= iVar3) {
                return 0;
              }
            }
            if (*(long *)(param_2 + 0x18) == 0) break;
            uVar10 = FUN_057e0998(*(long *)(param_2 + 0x18),iVar5,DAT_091acfe0);
            if (((*(long *)(param_1 + 0x28) == 0) ||
                (lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x30), lVar11 == 0)) ||
               (lVar11 = *(long *)(lVar11 + 0x20), lVar11 == 0)) break;
            iVar3 = FUN_057e1a08(lVar11,uVar10,DAT_091acfd0);
            if (iVar3 < 0) {
              return 0;
            }
            local_68 = CookingGraph_CustomerOrderGenerator__Member(2,iVar3,uVar10);
            lVar11 = DAT_091aecb8;
            if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x28), lVar15 == 0)) break;
            lVar12 = *(long *)(lVar15 + 0x10);
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar12 == 0) break;
            uVar1 = *(uint *)(lVar15 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = local_68;
              thunk_FUN_03f5d7b8(plVar8);
            }
            else {
              FUN_057e0c68(lVar15,local_68,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0x38) == 0) break;
            FUN_06fd8454(*(long *)(param_1 + 0x38),uVar7,local_68,DAT_0919fbd8);
            if (iVar5 != 0) {
              if (*(long *)(param_2 + 0x18) == 0) break;
              uVar7 = FUN_057e0998(*(long *)(param_2 + 0x18),iVar5 + -1,DAT_091acfe0);
              lVar11 = *(long *)(param_1 + 0x40);
              iVar3 = CookingGraph_CustomerOrderGenerator__Held(lVar11,uVar7);
              if (lVar11 == 0) break;
              FUN_06fca434(lVar11,uVar7,iVar3 + 1,DAT_0919cc80);
            }
          }
          lVar11 = *(long *)(param_2 + 0x18);
          iVar5 = iVar5 + 1;
          plVar8 = &local_68;
        } while (lVar11 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

