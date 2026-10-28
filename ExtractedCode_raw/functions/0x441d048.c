// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$ResolveTerminalYield
// address: 0x441d048
// body: available
// range: 0x441d048-0x441d233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441d230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CookingGraph_EstimatorBotScorer__ResolveTerminalYield
              (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long local_40;
  int local_34;
  
  if ((DAT_09517f16 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d038);
    FUN_03f5c2a4(&DAT_0919d0e8);
    FUN_03f5c2a4(&DAT_0919d048);
    FUN_03f5c2a4(&DAT_091a8268);
    FUN_03f5c2a4(&DAT_091a8278);
    FUN_03f5c2a4(&DAT_091a8288);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09517f16 = 1;
  }
  local_34 = 0;
  local_40 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar4 = FUN_06fcbf70(*(long *)(param_1 + 0x68),param_2,&local_34,DAT_0919d038);
    if ((uVar4 & 1) != 0) {
      return local_34;
    }
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_0441d230;
    uVar4 = FUN_053ebc3c(*(long *)(param_1 + 0x78),param_2,DAT_091a8278);
    if ((uVar4 & 1) == 0) {
      if (param_3 == 0) goto LAB_0441d230;
      uVar4 = FUN_053ec72c(param_3,param_2,DAT_091a8268);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_0441d230;
        uVar4 = FUN_06fd9fbc(*(long *)(param_1 + 0x40),param_2,&local_40,DAT_0919d0e8);
        if ((uVar4 & 1) != 0) {
          if (local_40 == 0) goto LAB_0441d230;
          uVar1 = *(undefined4 *)(local_40 + 0x20);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar2 = System_Math__Max(1,uVar1,0);
          if (local_40 == 0) goto LAB_0441d230;
          iVar3 = CookingGraph_EstimatorBotScorer__ResolveTerminalYield
                            (param_1,*(undefined8 *)(local_40 + 0x10),param_3);
          FUN_053ebe0c(param_3,param_2,DAT_091a8288);
          lVar5 = *(long *)(param_1 + 0x68);
          if (lVar5 == 0) goto LAB_0441d230;
          iVar3 = iVar3 * iVar2;
          goto LAB_0441d214;
        }
      }
    }
    lVar5 = *(long *)(param_1 + 0x68);
    if (lVar5 != 0) {
      iVar3 = 1;
LAB_0441d214:
      FUN_06fca434(lVar5,param_2,iVar3,DAT_0919d048);
      return iVar3;
    }
  }
LAB_0441d230:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

