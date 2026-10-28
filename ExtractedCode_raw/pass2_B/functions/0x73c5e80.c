// rea decompile_all
// name: MessagePack.Internal.DynamicGenericResolverGetFormatterHelper$$.cctor
// address: 0x73c5e80
// body: available
// range: 0x73c5e80-0x73c691b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73c6914 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73c6918 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicGenericResolverGetFormatterHelper___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09520c97 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171280);
    FUN_03f5c2a4(&DAT_09171288);
    FUN_03f5c2a4(&DAT_09171290);
    FUN_03f5c2a4(&DAT_09171298);
    FUN_03f5c2a4(&DAT_091712a0);
    FUN_03f5c2a4(&DAT_091712a8);
    FUN_03f5c2a4(&DAT_091712b0);
    FUN_03f5c2a4(&DAT_091712b8);
    FUN_03f5c2a4(&DAT_091715a8);
    FUN_03f5c2a4(&DAT_091a0dd0);
    FUN_03f5c2a4(&DAT_091a0dc8);
    FUN_03f5c2a4(&DAT_09176f70);
    FUN_03f5c2a4(&DAT_091715b8);
    FUN_03f5c2a4(&DAT_09183e60);
    FUN_03f5c2a4(&DAT_09171a20);
    FUN_03f5c2a4(&DAT_09171a28);
    FUN_03f5c2a4(&DAT_09171b40);
    FUN_03f5c2a4(&DAT_09171ba8);
    FUN_03f5c2a4(&DAT_09171bc0);
    FUN_03f5c2a4(&DAT_09171c30);
    FUN_03f5c2a4(&DAT_09171ca8);
    FUN_03f5c2a4(&DAT_09171cb0);
    FUN_03f5c2a4(&DAT_09171d28);
    FUN_03f5c2a4(&DAT_09171d30);
    FUN_03f5c2a4(&DAT_09171d38);
    FUN_03f5c2a4(&DAT_09171d80);
    FUN_03f5c2a4(&DAT_09172078);
    FUN_03f5c2a4(&DAT_09172080);
    FUN_03f5c2a4(&DAT_09172088);
    FUN_03f5c2a4(&DAT_09172090);
    FUN_03f5c2a4(&DAT_091720c0);
    FUN_03f5c2a4(&DAT_091720c8);
    FUN_03f5c2a4(&DAT_091720d0);
    FUN_03f5c2a4(&DAT_091720d8);
    FUN_03f5c2a4(&DAT_091720e0);
    FUN_03f5c2a4(&DAT_091720e8);
    FUN_03f5c2a4(&DAT_09172220);
    FUN_03f5c2a4(&DAT_09172228);
    FUN_03f5c2a4(&DAT_09172270);
    FUN_03f5c2a4(&DAT_09172278);
    FUN_03f5c2a4(&DAT_09172280);
    FUN_03f5c2a4(&DAT_09172288);
    FUN_03f5c2a4(&DAT_091725f0);
    FUN_03f5c2a4(&DAT_091725f8);
    FUN_03f5c2a4(&DAT_091728a0);
    FUN_03f5c2a4(&DAT_091728a8);
    FUN_03f5c2a4(&DAT_09172918);
    FUN_03f5c2a4(&DAT_09172920);
    FUN_03f5c2a4(&DAT_09172928);
    FUN_03f5c2a4(&DAT_09172930);
    FUN_03f5c2a4(&DAT_09172958);
    FUN_03f5c2a4(&DAT_09172960);
    FUN_03f5c2a4(&DAT_09172d38);
    FUN_03f5c2a4(&DAT_09172d40);
    FUN_03f5c2a4(&DAT_09172d48);
    FUN_03f5c2a4(&DAT_09172d50);
    FUN_03f5c2a4(&DAT_09172e08);
    FUN_03f5c2a4(&DAT_09172e28);
    DAT_09520c97 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09176f70);
  FUN_06fd76bc(lVar1,DAT_091a0dc8);
  uVar2 = DAT_09172288;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  uVar3 = System_Type__GetTypeFromHandle(DAT_09172280,0);
  if (lVar1 != 0) {
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172278,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172270,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091728a8,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091728a0,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172e28,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172e08,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171a28,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171a20,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172920,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172918,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171ca8,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091720c0,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171b40,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172078,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171bc0,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172088,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091715b8,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091715a8,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171ba8,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172080,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172d40,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172d38,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172d50,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172d48,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171cb0,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091720c8,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171c30,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172090,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091725f8,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091725f0,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172960,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172958,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171d38,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091720e0,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171d28,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091720d0,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171d80,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091720e8,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171288,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171280,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091712a8,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091712a0,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091712b8,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091712b0,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172930,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172928,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171d30,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091720d8,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171298,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171290,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172228,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172220,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    **(long **)(DAT_09183e60 + 0xb8) = lVar1;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183e60 + 0xb8),lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

