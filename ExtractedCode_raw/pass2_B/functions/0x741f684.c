// rea decompile_all
// name: Mono.Security.Cryptography.KeyPairPersistence$$get_UserPath
// address: 0x741f684
// body: available
// range: 0x741f684-0x741fa3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741f93c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741f9b8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741fa3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0741f8e4) */
/* WARNING: Removing unreachable block (ram,0x0741f93c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 Mono_Security_Cryptography_KeyPairPersistence__get_UserPath(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte *pbVar8;
  char local_3c [4];
  undefined8 local_38;
  
  if ((DAT_09520f7f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187500);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_091f9388);
    FUN_03f5c2a4(&DAT_0921e018);
    DAT_09520f7f = 1;
  }
  local_38 = 0;
  local_3c[0] = '\0';
  if (*(int *)(DAT_09187500 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_3c[0] = '\0';
  local_38 = *(undefined8 *)(*(long *)(DAT_09187500 + 0xb8) + 0x20);
  System_Threading_Monitor__Enter(local_38,local_3c,0);
  if (*(int *)(DAT_09187500 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  pcVar7 = *(char **)(DAT_09187500 + 0xb8);
  if (*(long *)(pcVar7 + 8) != 0) {
    if (*(int *)(DAT_09187500 + 0xe4) == 0) {
      FUN_03f5c424();
      pcVar7 = *(char **)(DAT_09187500 + 0xb8);
    }
    lVar5 = DAT_09187500;
    if (*pcVar7 != '\0') goto LAB_0741f870;
  }
  uVar2 = System_Environment__GetFolderPath(0x1a,0);
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_IO_Path__Combine(uVar2,DAT_091f9388,0);
  if (*(int *)(DAT_09187500 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = (undefined8 *)(*(long *)(DAT_09187500 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = System_IO_Path__Combine
                    (*(undefined8 *)(*(long *)(DAT_09187500 + 0xb8) + 8),DAT_0921e018,0);
  *(undefined8 *)(*(long *)(DAT_09187500 + 0xb8) + 8) = uVar2;
  thunk_FUN_03f5d7b8();
  bVar1 = System_IO_Directory__Exists(*(undefined8 *)(*(long *)(DAT_09187500 + 0xb8) + 8),0);
  lVar5 = DAT_09187500;
  pbVar8 = *(byte **)(DAT_09187500 + 0xb8);
  *pbVar8 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
      pbVar8 = *(byte **)(DAT_09187500 + 0xb8);
    }
    System_IO_Directory__CreateDirectory(*(undefined8 *)(pbVar8 + 8),0);
    if (*(int *)(DAT_09187500 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = DAT_09187500;
    **(undefined1 **)(DAT_09187500 + 0xb8) = 1;
  }
LAB_0741f870:
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar5 = DAT_09187500;
  }
  uVar4 = Mono_Security_Cryptography_KeyPairPersistence__IsUserProtected
                    (*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8));
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_09187500 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = Mono_Security_Cryptography_KeyPairPersistence__ProtectUser
                      (*(undefined8 *)(*(long *)(DAT_09187500 + 0xb8) + 8));
    if ((uVar4 & 1) == 0) {
      uVar2 = thunk_FUN_03fc39d4(&DAT_091ff718);
      lVar5 = thunk_FUN_03fc39d4(&DAT_09187500);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = thunk_FUN_03fc39d4(&DAT_09187500);
      uVar2 = System_String__Format(uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
      thunk_FUN_03fc39d4(&DAT_09186188);
      uVar6 = thunk_FUN_03f9944c();
      System_IO_IOException___ctor(uVar6,uVar2,0);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091d2048);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar2);
    }
  }
  if (local_3c[0] != '\0') {
    System_Threading_Monitor__Exit(local_38,0);
  }
  if (*(int *)(DAT_09187500 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = Mono_Security_Cryptography_KeyPairPersistence__IsUserProtected
                    (*(undefined8 *)(*(long *)(DAT_09187500 + 0xb8) + 8));
  if ((uVar4 & 1) == 0) {
    uVar2 = thunk_FUN_03fc39d4(&DAT_092047a8);
    thunk_FUN_03fc39d4(&DAT_09187500);
    FUN_039afb80();
    lVar5 = thunk_FUN_03fc39d4(&DAT_09187500);
    uVar2 = System_String__Format(uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar6 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar6,uVar2,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d2048);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar2);
  }
  if (*(int *)(DAT_09187500 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  return *(undefined8 *)(*(long *)(DAT_09187500 + 0xb8) + 8);
}

