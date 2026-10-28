// rea decompile_all
// name: CookingGraph.CookingRuntimeSettings$$Matches
// address: 0x447c928
// body: available
// range: 0x447c928-0x447cbf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x447cbec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447cbf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447cbf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CookingGraph_CookingRuntimeSettings__Matches(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_095180af & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3dd0);
    FUN_03f5c2a4(&DAT_091a3dd8);
    FUN_03f5c2a4(&DAT_091a3de0);
    FUN_03f5c2a4(&DAT_091af2b0);
    FUN_03f5c2a4(&DAT_091af2b8);
    FUN_03f5c2a4(&DAT_091af2c0);
    FUN_03f5c2a4(&DAT_091af2a8);
    FUN_03f5c2a4(&DAT_091af2c8);
    FUN_03f5c2a4(&DAT_0917c968);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e008);
    FUN_03f5c2a4(&DAT_091e8008);
    FUN_03f5c2a4(&DAT_0918f730);
    DAT_095180af = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_0447cbec;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar5,uVar7,0);
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,uVar7,0);
    if (((uVar3 & 1) == 0) && (*(long *)(param_1 + 0x28) != 0)) {
      lVar6 = *(long *)(param_2 + 0x20);
      if (lVar6 == 0) {
LAB_0447cbec:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) == *(int *)(lVar6 + 0x18)) {
        lVar4 = thunk_FUN_03f9944c(DAT_0917c968);
        FUN_057e053c(lVar4,lVar6,DAT_091af2a8);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_0447cbec;
        FUN_057e185c(&local_98,*(long *)(param_1 + 0x28),DAT_091af2b8);
        uStack_78 = puStack_90;
        local_80 = local_98;
        local_70 = local_88;
        puStack_90 = &local_80;
        local_98 = 0;
        while( true ) {
          uVar1 = FUN_071bd28c(&local_80,DAT_091a3dd8);
          if ((uVar1 & 1) == 0) break;
          lVar6 = thunk_FUN_03f9944c(DAT_0918f730);
          System_Object___ctor(lVar6,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar8 = (long *)(lVar6 + 0x10);
          *plVar8 = local_70;
          thunk_FUN_03f5d7b8(plVar8);
          if (*plVar8 == 0) break;
          uVar5 = thunk_FUN_03f9944c(DAT_0917e008);
          FUN_05d78cfc(uVar5,lVar6,DAT_091e8008,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar2 = FUN_057e1520(lVar4,uVar5,DAT_091af2b0);
          if (iVar2 < 0) break;
          FUN_057e251c(lVar4,iVar2,DAT_091af2c0);
        }
        uVar1 = uVar1 ^ 1;
        FUN_071bd288(&local_80,DAT_091a3dd0);
        goto LAB_0447cbac;
      }
    }
  }
  uVar1 = 0;
LAB_0447cbac:
  return uVar1 & 1;
}

