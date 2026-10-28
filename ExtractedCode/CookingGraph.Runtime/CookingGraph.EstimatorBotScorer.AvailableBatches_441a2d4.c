// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$AvailableBatches
// address: 0x441a2d4
// body: available
// range: 0x441a2d4-0x441a583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441a57c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441a580 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong CookingGraph_EstimatorBotScorer__AvailableBatches(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_64;
  
  if ((DAT_09517f04 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d038);
    FUN_03f5c2a4(&DAT_0919d020);
    FUN_03f5c2a4(&DAT_0919d040);
    FUN_03f5c2a4(&DAT_0919d048);
    FUN_03f5c2a4(&DAT_091762c0);
    FUN_03f5c2a4(&DAT_091c9f08);
    FUN_03f5c2a4(&DAT_091a3380);
    FUN_03f5c2a4(&DAT_091a3388);
    FUN_03f5c2a4(&DAT_091a3390);
    FUN_03f5c2a4(&DAT_09178078);
    FUN_03f5c2a4(&DAT_091ada18);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091e9bd0);
    FUN_03f5c2a4(&DAT_09190688);
    DAT_09517f04 = 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_64 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_09190688);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),param_2);
    lVar3 = thunk_FUN_03f9944c(DAT_091762c0);
    FUN_06fc96ac(lVar3,DAT_0919d020);
    if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      FUN_057e185c(&local_88,*(long *)(param_1 + 0x18),DAT_091ada18);
      while (uVar4 = FUN_071bd28c(&local_88,DAT_091a3388), uVar5 = local_78, (uVar4 & 1) != 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fcbf70(lVar3,local_78,&local_64,DAT_0919d038);
        FUN_06fca434(lVar3,uVar5,local_64 + 1,DAT_0919d048);
      }
      FUN_071bd288(&local_88,DAT_091a3380);
      if (lVar3 != 0) {
        uVar4 = FUN_06fca100(lVar3,DAT_0919d040);
        if ((int)uVar4 != 0) {
          uVar5 = thunk_FUN_03f9944c(DAT_09178078);
          FUN_0530838c(uVar5,lVar2,DAT_091e9bd0,0);
          fVar6 = (float)FUN_04aea054(lVar3,uVar5,DAT_091c9f08);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = 0x80000000;
          if ((float)(int)(fVar6 + 0.0001) != INFINITY) {
            uVar1 = (int)(fVar6 + 0.0001);
          }
          uVar4 = (ulong)uVar1;
        }
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

