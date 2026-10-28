// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$Occupied
// address: 0x44551a8
// body: available
// range: 0x44551a8-0x445537f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445537c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CookingGraph_CookingLevelSimulation__Occupied(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_0951806c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9458);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_0917b328);
    FUN_03f5c2a4(&DAT_091e7d68);
    FUN_03f5c2a4(&DAT_0918f4e0);
    DAT_0951806c = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918f4e0);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass278_0___ctor(lVar3,0);
  if (lVar3 == 0) {
LAB_0445537c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *(undefined8 *)(lVar3 + 0x20) = param_2[2];
  *(undefined8 *)(lVar3 + 0x18) = uVar7;
  *(undefined8 *)(lVar3 + 0x10) = uVar6;
  thunk_FUN_03f5d7b8(lVar3 + 0x18,0);
  if (*(long *)(param_1 + 0x178) == 0) goto LAB_0445537c;
  uStack_48 = *(undefined8 *)(lVar3 + 0x18);
  local_50 = *(undefined8 *)(lVar3 + 0x10);
  local_40 = *(undefined8 *)(lVar3 + 0x20);
  plVar4 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                             (*(long *)(param_1 + 0x178),&local_50,0);
  if (plVar4 == (long *)0x0) goto LAB_0445537c;
  lVar8 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_0917b328) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_044552cc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b328,0);
LAB_044552cc:
  iVar1 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if (iVar1 < 1) {
    uStack_68 = *(undefined8 *)(lVar3 + 0x18);
    local_70 = *(undefined8 *)(lVar3 + 0x10);
    local_60 = *(undefined8 *)(lVar3 + 0x20);
    uVar9 = CookingGraph_CookingLevelSimulation__Incoming(param_1,&local_70);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x178) == 0) goto LAB_0445537c;
      uVar6 = CookingGraph_Execution_CookingExecution__get_Transfers(*(long *)(param_1 + 0x178),0);
      uVar7 = thunk_FUN_03f9944c(DAT_09178730);
      FUN_05322d94(uVar7,lVar3,DAT_091e7d68,0);
      uVar2 = FUN_04ab6f28(uVar6,uVar7,DAT_091c9458);
      goto LAB_04455304;
    }
  }
  uVar2 = 1;
LAB_04455304:
  return uVar2 & 1;
}

