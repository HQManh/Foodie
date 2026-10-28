// rea decompile_all
// name: RenderPipelineChecker$$DoesTypeExist
// address: 0x4050530
// body: available
// range: 0x4050530-0x40508b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40508b0 to 0x75cf88c System.Type$$op_Inequality (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40508b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void RenderPipelineChecker__DoesTypeExist(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_09515b07 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9bc8);
    FUN_03f5c2a4(&DAT_091caa10);
    FUN_03f5c2a4(&DAT_091ca180);
    FUN_03f5c2a4(&DAT_091cb350);
    FUN_03f5c2a4(&DAT_09177fa0);
    FUN_03f5c2a4(&DAT_09177fa8);
    FUN_03f5c2a4(&DAT_091783f0);
    FUN_03f5c2a4(&DAT_09179600);
    FUN_03f5c2a4(&DAT_091ef018);
    FUN_03f5c2a4(&DAT_091ef020);
    FUN_03f5c2a4(&DAT_091ef028);
    FUN_03f5c2a4(&DAT_091ef038);
    FUN_03f5c2a4(&DAT_09193be8);
    FUN_03f5c2a4(&DAT_09193be0);
    DAT_09515b07 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09193be8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_1);
    lVar2 = thunk_FUN_03f6aadc(0);
    if (lVar2 != 0) {
      uVar3 = System_AppDomain__GetAssemblies(lVar2,0);
      if (*(int *)(DAT_09193be0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09193be0);
      }
      puVar5 = *(undefined8 **)(DAT_09193be0 + 0xb8);
      lVar2 = puVar5[1];
      if (lVar2 == 0) {
        if (*(int *)(DAT_09193be0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09193be0);
          puVar5 = *(undefined8 **)(DAT_09193be0 + 0xb8);
        }
        uVar6 = *puVar5;
        lVar2 = thunk_FUN_03f9944c(DAT_091783f0);
        FUN_05324070(lVar2,uVar6,DAT_091ef018,0);
        plVar4 = (long *)(*(long *)(DAT_09193be0 + 0xb8) + 8);
        *plVar4 = lVar2;
        thunk_FUN_03f5d7b8(plVar4,lVar2);
      }
      if (*(int *)(DAT_09193be0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09193be0);
      }
      puVar5 = *(undefined8 **)(DAT_09193be0 + 0xb8);
      lVar7 = puVar5[2];
      if (lVar7 == 0) {
        if (*(int *)(DAT_09193be0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09193be0);
          puVar5 = *(undefined8 **)(DAT_09193be0 + 0xb8);
        }
        uVar6 = *puVar5;
        lVar7 = thunk_FUN_03f9944c(DAT_09179600);
        FUN_05331a8c(lVar7,uVar6,DAT_091ef020,0);
        plVar4 = (long *)(*(long *)(DAT_09193be0 + 0xb8) + 0x10);
        *plVar4 = lVar7;
        thunk_FUN_03f5d7b8(plVar4,lVar7);
      }
      uVar3 = FUN_04afada8(uVar3,lVar2,lVar7,DAT_091caa10);
      uVar6 = thunk_FUN_03f9944c(DAT_09177fa0);
      FUN_05322d94(uVar6,lVar1,DAT_091ef038,0);
      uVar3 = FUN_04b0cafc(uVar3,uVar6,DAT_091cb350);
      if (*(int *)(DAT_09193be0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09193be0);
      }
      puVar5 = *(undefined8 **)(DAT_09193be0 + 0xb8);
      lVar1 = puVar5[3];
      if (lVar1 == 0) {
        if (*(int *)(DAT_09193be0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09193be0);
          puVar5 = *(undefined8 **)(DAT_09193be0 + 0xb8);
        }
        uVar6 = *puVar5;
        lVar1 = thunk_FUN_03f9944c(DAT_09177fa8);
        FUN_05324070(lVar1,uVar6,DAT_091ef028,0);
        plVar4 = (long *)(*(long *)(DAT_09193be0 + 0xb8) + 0x18);
        *plVar4 = lVar1;
        thunk_FUN_03f5d7b8(plVar4,lVar1);
      }
      uVar3 = FUN_04af8044(uVar3,lVar1,DAT_091ca180);
      uVar3 = FUN_04ae45c0(uVar3,DAT_091c9bc8);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      System_Type__op_Inequality(uVar3,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

