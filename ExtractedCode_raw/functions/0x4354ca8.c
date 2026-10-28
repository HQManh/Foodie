// rea decompile_all
// name: CakeOrder.Home.Journey.JourneyProgress$$CountClaimableMilestones
// address: 0x4354ca8
// body: available
// range: 0x4354ca8-0x4354d7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4354d78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CakeOrder_Home_Journey_JourneyProgress__CountClaimableMilestones(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((DAT_095177d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177d6 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    iVar1 = CakeOrder_Home_Journey_JourneyProgress__CountCompletedLevels();
    if (param_1 != 0) {
      iVar6 = 0;
      iVar7 = 0;
      while( true ) {
        iVar5 = 0;
        if (*(long *)(param_1 + 0x20) != 0) {
          iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x18);
        }
        if (iVar5 <= iVar7) {
          return iVar6;
        }
        lVar4 = CakeOrder_Home_Journey_JourneyMilestoneRemoteConfig__Get(param_1,iVar7);
        if (lVar4 == 0) break;
        iVar5 = *(int *)(lVar4 + 0x10);
        uVar2 = CakeOrder_Home_Journey_JourneyProgress__IsMilestoneClaimed(iVar5);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + ((uint)(iVar5 <= iVar1) & (uVar2 ^ 0xffffffff));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return 0;
}

