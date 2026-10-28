// rea decompile_all
// name: CookingGraph.CookingGraphIndex$$Contains
// address: 0x4484d68
// body: available
// range: 0x4484d68-0x44852bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4485298 to 0x4ab6f28 FUN_04ab6f28 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44852b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingGraphIndex__Contains(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((DAT_095180c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_091c9438);
    FUN_03f5c2a4(&DAT_091c9650);
    FUN_03f5c2a4(&DAT_091c9690);
    FUN_03f5c2a4(&DAT_091ca5f0);
    FUN_03f5c2a4(&DAT_091ca628);
    FUN_03f5c2a4(&DAT_091cb528);
    FUN_03f5c2a4(&DAT_091cb538);
    FUN_03f5c2a4(&DAT_091786c8);
    FUN_03f5c2a4(&DAT_09178dc0);
    FUN_03f5c2a4(&DAT_09178d60);
    FUN_03f5c2a4(&DAT_09178db8);
    FUN_03f5c2a4(&DAT_09178d68);
    FUN_03f5c2a4(&DAT_091a8028);
    FUN_03f5c2a4(&DAT_091a8018);
    FUN_03f5c2a4(&DAT_09179d90);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e7218);
    FUN_03f5c2a4(&DAT_091e7220);
    FUN_03f5c2a4(&DAT_091e73e0);
    FUN_03f5c2a4(&DAT_091e73e8);
    FUN_03f5c2a4(&DAT_091e73f0);
    FUN_03f5c2a4(&DAT_0918f240);
    FUN_03f5c2a4(&DAT_0918f178);
    DAT_095180c2 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f240);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) goto LAB_044852b8;
  plVar9 = (long *)(lVar1 + 0x10);
  *plVar9 = param_2;
  thunk_FUN_03f5d7b8(plVar9,param_2);
  *(long *)(lVar1 + 0x18) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_1);
  puVar8 = (undefined8 *)(lVar1 + 0x20);
  *puVar8 = param_3;
  thunk_FUN_03f5d7b8(puVar8,param_3);
  plVar7 = (long *)(lVar1 + 0x28);
  *plVar7 = param_4;
  thunk_FUN_03f5d7b8(plVar7,param_4);
  lVar5 = *plVar9;
  uVar10 = *puVar8;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(lVar5,uVar10,0);
  if ((uVar2 & 1) == 0) {
    lVar5 = *plVar7;
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_03f9944c(DAT_09179d90);
      FUN_053eb530(lVar5,DAT_091a8018);
    }
    *plVar7 = lVar5;
    thunk_FUN_03f5d7b8(plVar7,lVar5);
    lVar5 = *plVar9;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(lVar5,0,0);
    if ((uVar2 & 1) == 0) {
      if (*plVar7 == 0) {
LAB_044852b8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = FUN_053ec72c(*plVar7,*plVar9,DAT_091a8028);
      if ((uVar2 & 1) != 0) {
        plVar9 = (long *)*plVar9;
        if (((plVar9 == (long *)0x0) || (*plVar9 != DAT_091828a0)) ||
           (uVar2 = CookingGraph_CookingGraphIndex__Contains(param_1,plVar9[8],*puVar8,*plVar7),
           (uVar2 & 1) == 0)) {
          lVar5 = *(long *)(param_1 + 0x88);
          if (lVar5 != 0) {
            uVar10 = FUN_04ad43f0(*(undefined8 *)(lVar5 + 0xa0),*(undefined8 *)(lVar5 + 0xa8),
                                  DAT_091c9690);
            uVar3 = thunk_FUN_03f9944c(DAT_09178d60);
            FUN_05322d94(uVar3,lVar1,DAT_091e73e0,0);
            uVar10 = FUN_04b0cafc(uVar10,uVar3,DAT_091cb528);
            if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f178);
            }
            puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
            lVar5 = puVar8[0x1f];
            if (lVar5 == 0) {
              if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f178);
                puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
              }
              uVar3 = *puVar8;
              lVar5 = thunk_FUN_03f9944c(DAT_09178d68);
              FUN_05324070(lVar5,uVar3,DAT_091e7218,0);
              plVar9 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0xf8);
              *plVar9 = lVar5;
              thunk_FUN_03f5d7b8(plVar9,lVar5);
            }
            uVar10 = FUN_04af8044(uVar10,lVar5,DAT_091ca5f0);
            if (*(long *)(param_1 + 0x88) != 0) {
              uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0);
              uVar3 = thunk_FUN_03f9944c(DAT_09178db8);
              FUN_05322d94(uVar3,lVar1,DAT_091e73e8,0);
              uVar3 = FUN_04b0cafc(uVar6,uVar3,DAT_091cb538);
              if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f178);
              }
              puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
              lVar5 = puVar8[0x20];
              if (lVar5 == 0) {
                if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_0918f178);
                  puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
                }
                uVar6 = *puVar8;
                lVar5 = thunk_FUN_03f9944c(DAT_09178dc0);
                FUN_05324070(lVar5,uVar6,DAT_091e7220,0);
                lVar4 = *(long *)(DAT_0918f178 + 0xb8);
                *(long *)(lVar4 + 0x100) = lVar5;
                thunk_FUN_03f5d7b8(lVar4 + 0x100,lVar5);
              }
              uVar3 = FUN_04af8044(uVar3,lVar5,DAT_091ca628);
              uVar10 = FUN_04ad43f0(uVar10,uVar3,DAT_091c9650);
              uVar3 = thunk_FUN_03f9944c(DAT_091786c8);
              FUN_05322d94(uVar3,lVar1,DAT_091e73f0,0);
              uVar10 = FUN_04ab6f28(uVar10,uVar3,DAT_091c9438);
              return uVar10;
            }
          }
          goto LAB_044852b8;
        }
        goto LAB_04484f60;
      }
    }
    uVar10 = 0;
  }
  else {
LAB_04484f60:
    uVar10 = 1;
  }
  return uVar10;
}

