// rea decompile_all
// name: MessagePack.SkipClrVisibilityChecks$$.cctor
// address: 0x73a36c0
// body: available
// range: 0x73a36c0-0x73a39b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a399c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73a39a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a39a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a39b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_SkipClrVisibilityChecks___cctor(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((DAT_09520b66 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194948);
    FUN_03f5c2a4(&DAT_09170f68);
    FUN_03f5c2a4(&DAT_09170f70);
    FUN_03f5c2a4(&DAT_09170f60);
    FUN_03f5c2a4(&DAT_091caa60);
    FUN_03f5c2a4(&DAT_091785f8);
    FUN_03f5c2a4(&DAT_091cfb80);
    FUN_03f5c2a4(&DAT_0918ad80);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091f0168);
    FUN_03f5c2a4(&DAT_09194940);
    FUN_03f5c2a4(&DAT_091fb780);
    DAT_09520b66 = 1;
  }
  uVar2 = DAT_09170f60;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)System_Type__GetTypeFromHandle(uVar2,0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x6a8))(plVar1,0x24,*(undefined8 *)(*plVar1 + 0x6b0));
    if (*(int *)(DAT_09194940 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194940);
    }
    uVar8 = **(undefined8 **)(DAT_09194940 + 0xb8);
    uVar3 = thunk_FUN_03f9944c(DAT_091785f8);
    FUN_05322d94(uVar3,uVar8,DAT_091f0168,0);
    uVar2 = FUN_04affee4(uVar2,uVar3,DAT_091caa60);
    **(undefined8 **)(DAT_0918ad80 + 0xb8) = uVar2;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918ad80 + 0xb8),uVar2);
    lVar4 = System_Type__GetTypeFromHandle(DAT_09170f70,0);
    plVar1 = (long *)FUN_03f5c394(DAT_09180748,1);
    lVar5 = System_Type__GetTypeFromHandle(DAT_09170f68,0);
    if (plVar1 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar6 == 0)) {
        uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,0);
      }
      if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar1[4] = lVar5;
      thunk_FUN_03f5d7b8(plVar1 + 4,lVar5);
      if (lVar4 != 0) {
        uVar2 = System_Type__GetConstructor(lVar4,plVar1,0);
        puVar7 = (undefined8 *)(*(long *)(DAT_0918ad80 + 0xb8) + 8);
        *puVar7 = uVar2;
        thunk_FUN_03f5d7b8(puVar7,uVar2);
        lVar4 = System_Type__GetTypeFromHandle(DAT_09170f70,0);
        if (lVar4 != 0) {
          uVar2 = System_Type__GetProperty(lVar4,DAT_091fb780,0);
          puVar7 = (undefined8 *)(*(long *)(DAT_0918ad80 + 0xb8) + 0x10);
          *puVar7 = uVar2;
          thunk_FUN_03f5d7b8(puVar7,uVar2);
          if (*(int *)(DAT_09194948 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = FUN_04bb58d0(**(undefined8 **)(DAT_09194948 + 0xb8),DAT_091cfb80);
          puVar7 = (undefined8 *)(*(long *)(DAT_0918ad80 + 0xb8) + 0x18);
          *puVar7 = uVar2;
          thunk_FUN_03f5d7b8(puVar7,uVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

