// rea decompile_all
// name: MessagePack.Resolvers.ForceSizePrimitiveObjectResolver.Helper$$.cctor
// address: 0x73ae09c
// body: available
// range: 0x73ae09c-0x73aea4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73aea48 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73aea4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Resolvers_ForceSizePrimitiveObjectResolver_Helper___cctor(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09520bc7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a0cd8);
    FUN_03f5c2a4(&DAT_091a0cd0);
    FUN_03f5c2a4(&DAT_09176f38);
    FUN_03f5c2a4(&DAT_09184848);
    FUN_03f5c2a4(&DAT_09184850);
    FUN_03f5c2a4(&DAT_09184858);
    FUN_03f5c2a4(&DAT_09184860);
    FUN_03f5c2a4(&DAT_09184868);
    FUN_03f5c2a4(&DAT_09184870);
    FUN_03f5c2a4(&DAT_09184878);
    FUN_03f5c2a4(&DAT_09184880);
    FUN_03f5c2a4(&DAT_09184888);
    FUN_03f5c2a4(&DAT_09184898);
    FUN_03f5c2a4(&DAT_091848a0);
    FUN_03f5c2a4(&DAT_091848a8);
    FUN_03f5c2a4(&DAT_091848b0);
    FUN_03f5c2a4(&DAT_091848b8);
    FUN_03f5c2a4(&DAT_091848c0);
    FUN_03f5c2a4(&DAT_09190b20);
    FUN_03f5c2a4(&DAT_09170bf8);
    FUN_03f5c2a4(&DAT_09170c00);
    FUN_03f5c2a4(&DAT_09170c08);
    FUN_03f5c2a4(&DAT_091889d0);
    FUN_03f5c2a4(&DAT_091889d8);
    FUN_03f5c2a4(&DAT_091889e0);
    FUN_03f5c2a4(&DAT_091889e8);
    FUN_03f5c2a4(&DAT_091889f0);
    FUN_03f5c2a4(&DAT_091889f8);
    FUN_03f5c2a4(&DAT_09188a00);
    FUN_03f5c2a4(&DAT_09188a08);
    FUN_03f5c2a4(&DAT_09170a40);
    FUN_03f5c2a4(&DAT_09170a30);
    FUN_03f5c2a4(&DAT_09170a88);
    FUN_03f5c2a4(&DAT_09170a68);
    FUN_03f5c2a4(&DAT_09170a38);
    FUN_03f5c2a4(&DAT_09170a90);
    FUN_03f5c2a4(&DAT_091709f0);
    FUN_03f5c2a4(&DAT_09170a98);
    FUN_03f5c2a4(&DAT_09170c30);
    FUN_03f5c2a4(&DAT_09170c58);
    FUN_03f5c2a4(&DAT_09170c60);
    FUN_03f5c2a4(&DAT_09170c68);
    DAT_09520bc7 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09176f38);
  FUN_06fd76bc(lVar2,DAT_091a0cd0);
  lVar1 = DAT_09535410;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__GetTypeFromHandle(lVar1 + 0x20,0);
  if (*(int *)(DAT_09184858 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09184858);
  }
  if (lVar2 != 0) {
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09184858 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
    if (*(int *)(DAT_09184868 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184868);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09184868 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535440 + 0x20,0);
    if (*(int *)(DAT_09184878 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184878);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09184878 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535418 + 0x20,0);
    if (*(int *)(DAT_091848a0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091848a0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091848a0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535428 + 0x20,0);
    if (*(int *)(DAT_091848b0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091848b0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091848b0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
    if (*(int *)(DAT_091848c0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091848c0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091848c0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
    if (*(int *)(DAT_09184848 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184848);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09184848 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535408 + 0x20,0);
    if (*(int *)(DAT_09184888 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184888);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09184888 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a30,0);
    if (*(int *)(DAT_091889d8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091889d8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091889d8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a38,0);
    if (*(int *)(DAT_091889e0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091889e0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091889e0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a40,0);
    if (*(int *)(DAT_091889e8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091889e8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091889e8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a88,0);
    if (*(int *)(DAT_091889f8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091889f8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091889f8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a90,0);
    if (*(int *)(DAT_09188a00 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a00);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a00 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a98,0);
    if (*(int *)(DAT_09188a08 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a08);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09188a08 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_091709f0,0);
    if (*(int *)(DAT_091889d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091889d0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091889d0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170a68,0);
    if (*(int *)(DAT_091889f0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091889f0);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091889f0 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170bf8,0);
    if (*(int *)(DAT_09184850 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184850);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09184850 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c00,0);
    if (*(int *)(DAT_09184860 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184860);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09184860 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c08,0);
    if (*(int *)(DAT_09184870 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184870);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09184870 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c58,0);
    if (*(int *)(DAT_09184898 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184898);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09184898 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c60,0);
    if (*(int *)(DAT_091848a8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091848a8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091848a8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c68,0);
    if (*(int *)(DAT_091848b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091848b8);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_091848b8 + 0xb8),DAT_091a0cd8);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170c30,0);
    if (*(int *)(DAT_09184880 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184880);
    }
    FUN_06fd8454(lVar2,uVar3,**(undefined8 **)(DAT_09184880 + 0xb8),DAT_091a0cd8);
    **(long **)(DAT_09190b20 + 0xb8) = lVar2;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09190b20 + 0xb8),lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

