// rea decompile_all
// name: MessagePack.MessagePackSecurity.ObjectFallbackEqualityComparer.<>c$$<.cctor>b__7_0
// address: 0x7390d8c
// body: available
// range: 0x7390d8c-0x7390ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7390ee0 to 0x4affee4 FUN_04affee4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7390ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackSecurity_ObjectFallbackEqualityComparer_<>c__<_cctor>b__7_0(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09520aca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091caa68);
    FUN_03f5c2a4(&DAT_09178d40);
    FUN_03f5c2a4(&DAT_09172420);
    FUN_03f5c2a4(&DAT_091f32c8);
    FUN_03f5c2a4(&DAT_091969b0);
    DAT_09520aca = 1;
  }
  uVar1 = DAT_09172420;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
  plVar2 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(uVar1,0);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x9f8))(plVar2,*(undefined8 *)(*plVar2 + 0xa00));
    if (*(int *)(DAT_091969b0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091969b0);
    }
    puVar3 = *(undefined8 **)(DAT_091969b0 + 0xb8);
    lVar4 = puVar3[1];
    if (lVar4 == 0) {
      if (*(int *)(DAT_091969b0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091969b0);
        puVar3 = *(undefined8 **)(DAT_091969b0 + 0xb8);
      }
      uVar5 = *puVar3;
      lVar4 = thunk_FUN_03f9944c(DAT_09178d40);
      FUN_05322d94(lVar4,uVar5,DAT_091f32c8,0);
      plVar2 = (long *)(*(long *)(DAT_091969b0 + 0xb8) + 8);
      *plVar2 = lVar4;
      thunk_FUN_03f5d7b8(plVar2,lVar4);
    }
    FUN_04affee4(uVar1,lVar4,DAT_091caa68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

