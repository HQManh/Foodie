// rea decompile_all
// name: System.Security.Claims.Claim$$.ctor
// address: 0x74799c8
// body: available
// range: 0x74799c8-0x7479cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7479c70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7479c74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7479c78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7479cc0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Claims_Claim___ctor(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_09521234 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0919feb8);
    FUN_03f5c2a4(&DAT_0919fe90);
    FUN_03f5c2a4(&DAT_0919fef0);
    FUN_03f5c2a4(&DAT_0919fef8);
    FUN_03f5c2a4(&DAT_09176c28);
    FUN_03f5c2a4(&DAT_091a68a0);
    FUN_03f5c2a4(&DAT_091a68a8);
    FUN_03f5c2a4(&DAT_091a68b0);
    FUN_03f5c2a4(&DAT_091a9260);
    FUN_03f5c2a4(&DAT_09188ac8);
    DAT_09521234 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uVar1 = thunk_FUN_03f9944c(DAT_09188ac8);
  System_Object___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar1);
  System_Object___ctor(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_092207c8);
    System_ArgumentNullException___ctor(uVar1,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c4bd8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar1,uVar4);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x50) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),param_3);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  thunk_FUN_03f5d7b8();
  if (*(long *)(param_2 + 0x40) != 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_09176c28);
    FUN_06fd76bc(lVar2,DAT_0919fe90);
    plVar6 = (long *)(param_1 + 0x40);
    *plVar6 = lVar2;
    thunk_FUN_03f5d7b8(plVar6,lVar2);
    if ((*(long *)(param_2 + 0x40) == 0) ||
       (lVar2 = FUN_06fd811c(*(long *)(param_2 + 0x40),DAT_0919fef8), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_055eefe0(&local_68,lVar2,DAT_091a9260);
    while (uVar3 = FUN_07275820(&local_68,DAT_091a68a8), uVar1 = local_58, (uVar3 & 1) != 0) {
      if (*(long *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *plVar6;
      uVar4 = FUN_06fd83d4(*(long *)(param_2 + 0x40),local_58,DAT_0919fef0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fd8454(lVar2,uVar1,uVar4,DAT_0919feb8);
    }
    FUN_0727581c(&local_68,DAT_091a68a0);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar4 = System_Array__Clone(*(long *)(param_2 + 0x38),0);
    uVar5 = thunk_FUN_03f99350(uVar4,DAT_0917fc88);
    uVar1 = DAT_0917fc88;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    uVar1 = thunk_FUN_03f99350(uVar4,uVar1);
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar1);
  }
  return;
}

