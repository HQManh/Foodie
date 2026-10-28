// rea decompile_all
// name: MessagePack.ImmutableCollection.ImmutableCollectionGetFormatterHelper$$.cctor
// address: 0x73d8234
// body: available
// range: 0x73d8234-0x73d87c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d87c0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73d87c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_ImmutableCollection_ImmutableCollectionGetFormatterHelper___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09520cf3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a0dd0);
    FUN_03f5c2a4(&DAT_091a0dc8);
    FUN_03f5c2a4(&DAT_09176f70);
    FUN_03f5c2a4(&DAT_09171c40);
    FUN_03f5c2a4(&DAT_09171c48);
    FUN_03f5c2a4(&DAT_09171c50);
    FUN_03f5c2a4(&DAT_09171c58);
    FUN_03f5c2a4(&DAT_09171c60);
    FUN_03f5c2a4(&DAT_09171dd8);
    FUN_03f5c2a4(&DAT_09171de0);
    FUN_03f5c2a4(&DAT_09186ae8);
    FUN_03f5c2a4(&DAT_09171de8);
    FUN_03f5c2a4(&DAT_09171df0);
    FUN_03f5c2a4(&DAT_09171df8);
    FUN_03f5c2a4(&DAT_09171e00);
    FUN_03f5c2a4(&DAT_09171e08);
    FUN_03f5c2a4(&DAT_09171e10);
    FUN_03f5c2a4(&DAT_09171e18);
    FUN_03f5c2a4(&DAT_09171e20);
    FUN_03f5c2a4(&DAT_09171e28);
    FUN_03f5c2a4(&DAT_09171e30);
    FUN_03f5c2a4(&DAT_09171e38);
    FUN_03f5c2a4(&DAT_09171e40);
    FUN_03f5c2a4(&DAT_09171e48);
    FUN_03f5c2a4(&DAT_09171e50);
    FUN_03f5c2a4(&DAT_09172098);
    FUN_03f5c2a4(&DAT_091720a0);
    FUN_03f5c2a4(&DAT_091720a8);
    FUN_03f5c2a4(&DAT_091720b0);
    FUN_03f5c2a4(&DAT_091720b8);
    DAT_09520cf3 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09176f70);
  FUN_06fd76bc(lVar1,DAT_091a0dc8);
  uVar2 = DAT_09171de0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  uVar3 = System_Type__GetTypeFromHandle(DAT_09171dd8,0);
  if (lVar1 != 0) {
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171e10,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171e08,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171df0,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171de8,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171e00,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171df8,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171e30,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171e28,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171e40,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171e38,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171e20,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171e18,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171e50,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171e48,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171c48,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091720a0,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171c40,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09172098,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171c50,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091720a8,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171c58,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091720b0,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171c60,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091720b8,0);
    FUN_06fd8454(lVar1,uVar2,uVar3,DAT_091a0dd0);
    **(long **)(DAT_09186ae8 + 0xb8) = lVar1;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09186ae8 + 0xb8),lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

