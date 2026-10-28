// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.Converter$$.cctor
// address: 0x74bba70
// body: available
// range: 0x74bba70-0x74bc2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bc2e8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74bc2ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_Converter___cctor(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((DAT_09521468 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170ba8);
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_09170bb8);
    FUN_03f5c2a4(&DAT_09171310);
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09170bc8);
    FUN_03f5c2a4(&DAT_09171448);
    FUN_03f5c2a4(&DAT_09170bd0);
    FUN_03f5c2a4(&DAT_09171520);
    FUN_03f5c2a4(&DAT_09170bd8);
    FUN_03f5c2a4(&DAT_09171d68);
    FUN_03f5c2a4(&DAT_09170bf8);
    FUN_03f5c2a4(&DAT_09170c00);
    FUN_03f5c2a4(&DAT_09170c08);
    FUN_03f5c2a4(&DAT_09172338);
    FUN_03f5c2a4(&DAT_09170c10);
    FUN_03f5c2a4(&DAT_09170c30);
    FUN_03f5c2a4(&DAT_09170c38);
    FUN_03f5c2a4(&DAT_09170c40);
    FUN_03f5c2a4(&DAT_09170c48);
    FUN_03f5c2a4(&DAT_09173188);
    FUN_03f5c2a4(&DAT_09170c50);
    FUN_03f5c2a4(&DAT_09170c58);
    FUN_03f5c2a4(&DAT_09170c60);
    FUN_03f5c2a4(&DAT_09170c68);
    DAT_09521468 = 1;
  }
  uVar2 = DAT_09171d68;
  iVar1 = *(int *)(DAT_095354b8 + 0xe4);
  **(undefined4 **)(DAT_09182b98 + 0xb8) = 0x11;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x30);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09171310,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x40);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535400 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x48);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x50);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535460 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x58);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09171520,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x60);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535458 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x68);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535410 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x70);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x78);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535440 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x80);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535408 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x88);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535450 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x90);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09173188,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x98);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09171448,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xa0);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535418 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xa8);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535428 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xb0);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xb8);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xc0);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_095353f8 + 0x20,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 200);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  uVar2 = System_Reflection_Assembly__GetAssembly
                    (*(undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38),0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xd0);
  *puVar4 = uVar2;
  thunk_FUN_03f5d7b8(puVar4,uVar2);
  plVar3 = *(long **)(*(long *)(DAT_09182b98 + 0xb8) + 0xd0);
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xd8);
    *puVar4 = uVar2;
    thunk_FUN_03f5d7b8(puVar4,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170c50,0);
    puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xe0);
    *puVar4 = uVar2;
    thunk_FUN_03f5d7b8(puVar4,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170c10,0);
    puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xe8);
    *puVar4 = uVar2;
    thunk_FUN_03f5d7b8(puVar4,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170c40,0);
    puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xf0);
    *puVar4 = uVar2;
    thunk_FUN_03f5d7b8(puVar4,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170ba8,0);
    puVar4 = (undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xf8);
    *puVar4 = uVar2;
    thunk_FUN_03f5d7b8(puVar4,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170bb0,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x100) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x100,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170bb8,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x108) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x108,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170bd0,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x110) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x110,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170bd8,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x118) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x118,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170bf8,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x120) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x120,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170c00,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x128) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x128,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170c08,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x130) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x130,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170c30,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x138) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x138,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170c38,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x140) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x140,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170c48,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x148) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x148,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170bc8,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x150) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x150,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170c58,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x158) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x158,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170c60,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x160) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x160,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170c68,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x168) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x168,uVar2);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172338,0);
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    *(undefined8 *)(lVar5 + 0x170) = uVar2;
    thunk_FUN_03f5d7b8(lVar5 + 0x170);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

