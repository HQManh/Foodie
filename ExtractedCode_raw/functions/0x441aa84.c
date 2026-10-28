// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$ProductionDepth
// address: 0x441aa84
// body: available
// range: 0x441aa84-0x441acef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441acec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CookingGraph_EstimatorBotScorer__ProductionDepth(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long local_48;
  int local_34;
  
  if ((DAT_09517f13 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d038);
    FUN_03f5c2a4(&DAT_0919d0e8);
    FUN_03f5c2a4(&DAT_0919d048);
    FUN_03f5c2a4(&DAT_091c9ef0);
    FUN_03f5c2a4(&DAT_09178af0);
    FUN_03f5c2a4(&DAT_091a8268);
    FUN_03f5c2a4(&DAT_091a8288);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e9c00);
    FUN_03f5c2a4(&DAT_091906c0);
    DAT_09517f13 = 1;
  }
  local_34 = 0;
  local_48 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_091906c0);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
    plVar5 = (long *)(lVar2 + 0x18);
    *plVar5 = param_3;
    thunk_FUN_03f5d7b8(plVar5,param_3);
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar3 = FUN_06fcbf70(*(long *)(param_1 + 0x58),param_2,&local_34,DAT_0919d038);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Equality(param_2,0,0);
        if ((uVar3 & 1) == 0) {
          if (*plVar5 == 0) goto LAB_0441acec;
          uVar3 = FUN_053ec72c(*plVar5,param_2,DAT_091a8268);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(param_1 + 0x38) == 0) goto LAB_0441acec;
            uVar3 = FUN_06fd9fbc(*(long *)(param_1 + 0x38),param_2,&local_48,DAT_0919d0e8);
            if ((uVar3 & 1) != 0) {
              if ((local_48 != 0) && (lVar6 = *(long *)(local_48 + 0x18), lVar6 != 0)) {
                if (*(int *)(lVar6 + 0x18) == 0) {
                  iVar1 = 1;
                }
                else {
                  uVar4 = thunk_FUN_03f9944c(DAT_09178af0);
                  FUN_053239c8(uVar4,lVar2,DAT_091e9c00,0);
                  iVar1 = FUN_04ae9f2c(lVar6,uVar4,DAT_091c9ef0);
                  iVar1 = iVar1 + 1;
                }
                if (*plVar5 != 0) {
                  FUN_053ebe0c(*plVar5,param_2,DAT_091a8288);
                  if (*(long *)(param_1 + 0x58) != 0) {
                    FUN_06fca434(*(long *)(param_1 + 0x58),param_2,iVar1,DAT_0919d048);
                    return iVar1;
                  }
                }
              }
              goto LAB_0441acec;
            }
          }
        }
        local_34 = 0;
      }
      return local_34;
    }
  }
LAB_0441acec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

