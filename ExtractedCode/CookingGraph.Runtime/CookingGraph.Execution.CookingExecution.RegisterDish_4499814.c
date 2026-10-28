// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$RegisterDish
// address: 0x4499814
// body: available
// range: 0x4499814-0x4499bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4499ad0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4499bf0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__RegisterDish
               (long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_095181b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091747c0);
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0919c850);
    FUN_03f5c2a4(&DAT_0918efa0);
    FUN_03f5c2a4(&DAT_091c93f8);
    FUN_03f5c2a4(&DAT_091cad50);
    FUN_03f5c2a4(&DAT_09178610);
    FUN_03f5c2a4(&DAT_091e6c68);
    FUN_03f5c2a4(&DAT_091e6cb8);
    FUN_03f5c2a4(&DAT_0918ef20);
    FUN_03f5c2a4(&DAT_0918ef00);
    DAT_095181b5 = 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918ef20);
  System_Object___ctor(lVar2,0);
  CookingGraph_Execution_CookingEndpoint___ctor(&local_88,4,param_2,param_3,0);
  if ((param_4 != 0) && (lVar3 = FUN_04b049e4(param_4,DAT_091cad50), lVar3 != 0)) {
    if (lVar2 != 0) {
      plVar9 = (long *)(lVar2 + 0x10);
      *plVar9 = lVar3;
      thunk_FUN_03f5d7b8(plVar9,lVar3);
      lVar3 = *plVar9;
      if (lVar3 != 0) {
        if (*(long *)(lVar3 + 0x18) != 0) {
          if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar8 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
          lVar11 = puVar8[5];
          if (lVar11 == 0) {
            if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar8 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
            }
            uVar12 = *puVar8;
            lVar11 = thunk_FUN_03f9944c(DAT_09178610);
            FUN_05322d94(lVar11,uVar12,DAT_091e6c68,0);
            plVar4 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x28);
            *plVar4 = lVar11;
            thunk_FUN_03f5d7b8(plVar4,lVar11);
          }
          uVar5 = FUN_04ab6f28(lVar3,lVar11,DAT_091c93f8);
          if ((uVar5 & 1) == 0) {
            if (*plVar9 != 0) {
              uVar12 = FUN_03f5c394(DAT_0917fc88,*(undefined4 *)(*plVar9 + 0x18));
              *(undefined8 *)(lVar2 + 0x18) = uVar12;
              thunk_FUN_03f5d7b8();
              plVar4 = (long *)(lVar2 + 0x20);
              *plVar4 = 0;
              thunk_FUN_03f5d7b8(plVar4,0);
              lVar3 = thunk_FUN_03f9944c(DAT_091747c0);
              FUN_070a7580(lVar3,lVar2,DAT_091e6cb8,0);
              *plVar4 = lVar3;
              thunk_FUN_03f5d7b8(plVar4,lVar3);
              lVar2 = *(long *)(lVar2 + 0x10);
              if (lVar2 != 0) {
                iVar10 = 0;
                do {
                  uVar1 = local_78;
                  uVar7 = uStack_80;
                  uVar12 = local_88;
                  if (*(int *)(lVar2 + 0x18) <= iVar10) {
                    lVar3 = *(long *)(param_1 + 0x18);
                    lVar2 = thunk_FUN_03f9944c(DAT_0918efa0);
                    System_Object___ctor(lVar2,0);
                    if (lVar2 != 0) {
                      *(long *)(lVar2 + 0x10) = *plVar9;
                      thunk_FUN_03f5d7b8();
                      if (*plVar9 != 0) {
                        uVar6 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(*plVar9 + 0x18));
                        *(undefined8 *)(lVar2 + 0x18) = uVar6;
                        thunk_FUN_03f5d7b8();
                        if (lVar3 != 0) {
                          uStack_68 = uVar7;
                          local_70 = uVar12;
                          local_60 = uVar1;
                          FUN_06e861a8(lVar3,&local_70,lVar2,DAT_0919c850);
                          return;
                        }
                      }
                    }
                    break;
                  }
                  lVar2 = *plVar4;
                  if (lVar2 == 0) break;
                  (**(code **)(lVar2 + 0x18))
                            (*(undefined8 *)(lVar2 + 0x40),iVar10,*(undefined8 *)(lVar2 + 0x28));
                  lVar2 = *plVar9;
                  iVar10 = iVar10 + 1;
                } while (lVar2 != 0);
              }
            }
            goto LAB_04499ad0;
          }
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar7 = thunk_FUN_03f9944c();
        uVar12 = thunk_FUN_03fc39d4(&DAT_091faf60);
        System_ArgumentException___ctor(uVar7,uVar12,0);
        goto LAB_04499bdc;
      }
    }
LAB_04499ad0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar7 = thunk_FUN_03f9944c();
  uVar12 = thunk_FUN_03fc39d4(&DAT_09222ea8);
  System_ArgumentNullException___ctor(uVar7,uVar12,0);
LAB_04499bdc:
  uVar12 = thunk_FUN_03fc39d4(&DAT_091c6498);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar12);
}

