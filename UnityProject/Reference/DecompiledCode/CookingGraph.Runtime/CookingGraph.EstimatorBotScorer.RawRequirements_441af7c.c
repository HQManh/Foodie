// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$RawRequirements
// address: 0x441af7c
// body: available
// range: 0x441af7c-0x441b327 inclusive
// range: 0x441b354-0x441b43f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441b428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441b430 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441b434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441b43c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0441b320) */
/* WARNING: Removing unreachable block (ram,0x0441b324) */
/* WARNING: Removing unreachable block (ram,0x0441b42c) */
/* WARNING: Removing unreachable block (ram,0x0441b408) */

long CookingGraph_EstimatorBotScorer__RawRequirements(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_f8;
  undefined8 *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  long local_68;
  
  if ((DAT_09517f12 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d0e0);
    FUN_03f5c2a4(&DAT_0919d090);
    FUN_03f5c2a4(&DAT_0919cfd8);
    FUN_03f5c2a4(&DAT_0919d078);
    FUN_03f5c2a4(&DAT_0919d0f0);
    FUN_03f5c2a4(&DAT_0919d0b0);
    FUN_03f5c2a4(&DAT_0919cfe0);
    FUN_03f5c2a4(&DAT_091762d0);
    FUN_03f5c2a4(&DAT_091a5e28);
    FUN_03f5c2a4(&DAT_091a3380);
    FUN_03f5c2a4(&DAT_091a5e30);
    FUN_03f5c2a4(&DAT_091a3388);
    FUN_03f5c2a4(&DAT_091a3390);
    FUN_03f5c2a4(&DAT_091a5e38);
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_091a8268);
    FUN_03f5c2a4(&DAT_091a8288);
    FUN_03f5c2a4(&DAT_091a9418);
    FUN_03f5c2a4(&DAT_091a9420);
    FUN_03f5c2a4(&DAT_091ada18);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517f12 = 1;
  }
  local_68 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_a0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = thunk_FUN_03f9944c(DAT_091762d0);
    FUN_06fe1d68(lVar6,DAT_0919d078);
    return lVar6;
  }
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_0441b428;
  uVar5 = FUN_06fd9fbc(*(long *)(param_1 + 0x50),param_2,&local_68,DAT_0919cfd8);
  if ((uVar5 & 1) != 0) {
    return local_68;
  }
  if (param_3 == 0) goto LAB_0441b428;
  uVar5 = FUN_053ec72c(param_3,param_2,DAT_091a8268);
  if ((uVar5 & 1) == 0) {
LAB_0441b354:
    lVar6 = thunk_FUN_03f9944c(DAT_091762d0);
    FUN_06fe1d68(lVar6,DAT_0919d078);
    if (lVar6 == 0) goto LAB_0441b428;
    FUN_06fe2ae8(0x3f800000,lVar6,param_2,DAT_0919d0b0);
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0441b428;
    uVar5 = FUN_06fd8648(*(long *)(param_1 + 0x38),param_2,DAT_0919d0e0);
    if ((uVar5 & 1) == 0) goto LAB_0441b354;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0441b428;
    lVar7 = FUN_06fd83d4(*(long *)(param_1 + 0x38),param_2,DAT_0919d0f0);
    lVar6 = thunk_FUN_03f9944c(DAT_091762d0);
    FUN_06fe1d68(lVar6,DAT_0919d078);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) goto LAB_0441b428;
    FUN_057e185c(&local_f8,*(long *)(lVar7 + 0x18),DAT_091ada18);
    puStack_88 = puStack_f0;
    local_90 = local_f8;
    local_80 = local_e8;
    local_c8 = &local_90;
    local_d0 = 0;
    while (uVar5 = FUN_071bd28c(&local_90,DAT_091a3388), lVar8 = local_d0, (uVar5 & 1) != 0) {
      lVar8 = CookingGraph_EstimatorBotScorer__RawRequirements(param_1,local_80,param_3);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fe2efc(&local_f8,lVar8,DAT_0919d090);
      local_c0 = local_f8;
      local_f8 = 0;
      puStack_b8 = puStack_f0;
      local_a8 = uStack_e0;
      local_b0 = local_e8;
      local_a0 = local_d8;
      puStack_f0 = &local_c0;
      while (uVar5 = FUN_07276bd0(&local_c0,DAT_091a5e30), uVar2 = local_b0, (uVar5 & 1) != 0) {
        fVar3 = (float)local_a8;
        uVar1 = *(undefined4 *)(lVar7 + 0x20);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar4 = System_Math__Max(1,uVar1,0);
        if (*(int *)(DAT_09184160 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CookingGraph_EstimatorBotScorer__Add(fVar3 / (float)iVar4,lVar6,uVar2);
      }
      FUN_07276cfc(&local_c0,DAT_091a5e28);
    }
    FUN_071bd288(local_c8,DAT_091a3380);
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar8);
    }
    FUN_053ebe0c(param_3,param_2,DAT_091a8288);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_06fd8440(*(long *)(param_1 + 0x50),param_2,lVar6,DAT_0919cfe0);
    return lVar6;
  }
LAB_0441b428:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

