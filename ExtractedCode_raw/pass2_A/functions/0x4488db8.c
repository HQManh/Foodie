// rea decompile_all
// name: CookingGraph.CookingLevelDefinition$$FromGenerated
// address: 0x4488db8
// body: available
// range: 0x4488db8-0x4489033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4488fd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4489030 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CookingLevelDefinition__FromGenerated(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 local_38;
  
  if ((DAT_095180ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182dd8);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091ac200);
    FUN_03f5c2a4(&DAT_091ac208);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095180ff = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar2 & 1) != 0) {
LAB_04488fec:
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar7 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_091faf90);
    System_ArgumentException___ctor(uVar7,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c6638);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar5);
  }
  if (param_1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar2 & 1) != 0) goto LAB_04488fec;
    lVar3 = thunk_FUN_03f9944c(DAT_09182dd8);
    CookingGraph_CookingLevelDefinition___ctor();
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x18);
      thunk_FUN_03f5d7b8();
      uVar7 = CookingGraph_GeneratedCookingLevel__Queues(param_1,0);
      *(undefined8 *)(lVar3 + 0x18) = uVar7;
      thunk_FUN_03f5d7b8();
      uVar7 = CookingGraph_GeneratedCookingLevel__Grid(param_1,0);
      *(undefined8 *)(lVar3 + 0x20) = uVar7;
      thunk_FUN_03f5d7b8();
      lVar4 = CookingGraph_GeneratedCookingLevel__Customers(param_1,0);
      plVar8 = (long *)(lVar3 + 0x28);
      *plVar8 = lVar4;
      thunk_FUN_03f5d7b8(plVar8,lVar4);
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_1 + 0x30);
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
      uVar7 = DAT_091b6f98;
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      local_38 = 0;
      *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(lVar3 + 0x40) = uVar1;
      *(undefined2 *)(lVar3 + 0x48) = *(undefined2 *)(param_1 + 0x28);
      FUN_05c3078c(&local_38,*(undefined4 *)(param_1 + 0x2c),uVar7);
      *(undefined8 *)(lVar3 + 0x4c) = local_38;
      if (param_2 == 0) {
        return lVar3;
      }
      lVar4 = *plVar8;
      if (lVar4 != 0) {
        iVar6 = 0;
        do {
          lVar4 = *(long *)(lVar4 + 0x10);
          if (lVar4 == 0) break;
          if (*(int *)(lVar4 + 0x18) <= iVar6) {
            return lVar3;
          }
          uVar7 = FUN_057e0998(lVar4,iVar6,DAT_091ac208);
          uVar2 = (**(code **)(param_2 + 0x18))
                            (*(undefined8 *)(param_2 + 0x40),uVar7,*(undefined8 *)(param_2 + 0x28));
          if ((uVar2 & 1) != 0) {
            if (*(long *)(lVar3 + 0x70) == 0) break;
            FUN_053d8048(*(long *)(lVar3 + 0x70),iVar6,DAT_091a82b0);
          }
          lVar4 = *plVar8;
          iVar6 = iVar6 + 1;
        } while (lVar4 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

