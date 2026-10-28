// rea decompile_all
// name: MessagePack.GeneratedMessagePackResolver.GeneratedMessagePackResolverGetFormatterHelper$$.cctor
// address: 0x424a2a4
// body: available
// range: 0x424a2a4-0x424a7d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424a7cc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x424a7d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_GeneratedMessagePackResolver_GeneratedMessagePackResolverGetFormatterHelper___cctor
               (void)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_09516ea7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09173d38);
    FUN_03f5c2a4(&DAT_091a0c98);
    FUN_03f5c2a4(&DAT_091a0c88);
    FUN_03f5c2a4(&DAT_09170888);
    FUN_03f5c2a4(&DAT_09176f30);
    FUN_03f5c2a4(&DAT_09170850);
    FUN_03f5c2a4(&DAT_09170880);
    FUN_03f5c2a4(&DAT_09170870);
    FUN_03f5c2a4(&DAT_09170838);
    FUN_03f5c2a4(&DAT_09170878);
    FUN_03f5c2a4(&DAT_09190d18);
    FUN_03f5c2a4(&DAT_09172248);
    FUN_03f5c2a4(&DAT_091709b0);
    FUN_03f5c2a4(&DAT_09170ca8);
    FUN_03f5c2a4(&DAT_09173d40);
    FUN_03f5c2a4(&DAT_09173d48);
    FUN_03f5c2a4(&DAT_09172310);
    FUN_03f5c2a4(&DAT_09170cb0);
    FUN_03f5c2a4(&DAT_09173d50);
    FUN_03f5c2a4(&DAT_09172730);
    FUN_03f5c2a4(&DAT_09173d68);
    FUN_03f5c2a4(&DAT_09173d58);
    FUN_03f5c2a4(&DAT_09170cb8);
    FUN_03f5c2a4(&DAT_09173d70);
    FUN_03f5c2a4(&DAT_09173d60);
    DAT_09516ea7 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09176f30);
  FUN_06fc96c4(lVar1,0x15,DAT_091a0c88);
  uVar2 = DAT_09170ca8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  if (lVar1 != 0) {
    FUN_06fca448(lVar1,uVar2,0,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170cb0,0);
    FUN_06fca448(lVar1,uVar2,1,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170cb8,0);
    FUN_06fca448(lVar1,uVar2,2,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170838,0);
    FUN_06fca448(lVar1,uVar2,3,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170888,0);
    FUN_06fca448(lVar1,uVar2,4,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170880,0);
    FUN_06fca448(lVar1,uVar2,5,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170850,0);
    FUN_06fca448(lVar1,uVar2,6,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170870,0);
    FUN_06fca448(lVar1,uVar2,7,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170878,0);
    FUN_06fca448(lVar1,uVar2,8,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091709b0,0);
    FUN_06fca448(lVar1,uVar2,9,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172730,0);
    FUN_06fca448(lVar1,uVar2,10,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172248,0);
    FUN_06fca448(lVar1,uVar2,0xb,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172310,0);
    FUN_06fca448(lVar1,uVar2,0xc,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173d38,0);
    FUN_06fca448(lVar1,uVar2,0xd,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173d40,0);
    FUN_06fca448(lVar1,uVar2,0xe,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173d48,0);
    FUN_06fca448(lVar1,uVar2,0xf,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173d50,0);
    FUN_06fca448(lVar1,uVar2,0x10,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173d58,0);
    FUN_06fca448(lVar1,uVar2,0x11,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173d60,0);
    FUN_06fca448(lVar1,uVar2,0x12,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173d68,0);
    FUN_06fca448(lVar1,uVar2,0x13,DAT_091a0c98);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173d70,0);
    FUN_06fca448(lVar1,uVar2,0x14,DAT_091a0c98);
    **(long **)(DAT_09190d18 + 0xb8) = lVar1;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09190d18 + 0xb8),lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

