// rea decompile_all
// name: MessagePack.GeneratedMessagePackResolver.GeneratedMessagePackResolverGetFormatterHelper$$GetFormatter
// address: 0x4249e10
// body: available
// range: 0x4249e10-0x424a24b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424a248 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_GeneratedMessagePackResolver_GeneratedMessagePackResolverGetFormatterHelper__GetFormatter
          (undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_24;
  
  if ((DAT_09516ea6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197140);
    FUN_03f5c2a4(&DAT_09197138);
    FUN_03f5c2a4(&DAT_09197130);
    FUN_03f5c2a4(&DAT_09175010);
    FUN_03f5c2a4(&DAT_09175008);
    FUN_03f5c2a4(&DAT_09175018);
    FUN_03f5c2a4(&DAT_09196f60);
    FUN_03f5c2a4(&DAT_0919c020);
    FUN_03f5c2a4(&DAT_0919c030);
    FUN_03f5c2a4(&DAT_0919c038);
    FUN_03f5c2a4(&DAT_0919c040);
    FUN_03f5c2a4(&DAT_0919c028);
    FUN_03f5c2a4(&DAT_0919c018);
    FUN_03f5c2a4(&DAT_09175f08);
    FUN_03f5c2a4(&DAT_09175ef0);
    FUN_03f5c2a4(&DAT_09175ef8);
    FUN_03f5c2a4(&DAT_09175f00);
    FUN_03f5c2a4(&DAT_09175ee8);
    FUN_03f5c2a4(&DAT_09175ee0);
    FUN_03f5c2a4(&DAT_091a0cb0);
    FUN_03f5c2a4(&DAT_09190d18);
    FUN_03f5c2a4(&DAT_09196f18);
    FUN_03f5c2a4(&DAT_091aa368);
    FUN_03f5c2a4(&DAT_0917b910);
    FUN_03f5c2a4(&DAT_09196f68);
    FUN_03f5c2a4(&DAT_09196f70);
    FUN_03f5c2a4(&DAT_09196f20);
    FUN_03f5c2a4(&DAT_09196f78);
    FUN_03f5c2a4(&DAT_09196f10);
    FUN_03f5c2a4(&DAT_09196f90);
    FUN_03f5c2a4(&DAT_09196f80);
    FUN_03f5c2a4(&DAT_09196f98);
    FUN_03f5c2a4(&DAT_09196f88);
    DAT_09516ea6 = 1;
  }
  local_24 = 0;
  if (*(int *)(DAT_09190d18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09190d18 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = FUN_06fcbf70(**(long **)(DAT_09190d18 + 0xb8),param_1,&local_24,DAT_091a0cb0);
  if ((uVar1 & 1) == 0) {
LAB_0424a234:
    return 0;
  }
  switch(local_24) {
  case 0:
    uVar2 = thunk_FUN_03f9944c(DAT_09175008);
    puVar3 = &DAT_09197130;
    goto LAB_0424a154;
  case 1:
    uVar2 = thunk_FUN_03f9944c(DAT_09175010);
    puVar3 = &DAT_09197138;
    goto LAB_0424a154;
  case 2:
    uVar2 = thunk_FUN_03f9944c(DAT_09175018);
    puVar3 = &DAT_09197140;
LAB_0424a154:
    FUN_050b3158(uVar2,*puVar3);
    return uVar2;
  case 3:
    uVar2 = thunk_FUN_03f9944c(DAT_09175ee0);
    FUN_06e27108(uVar2,DAT_0919c018);
    return uVar2;
  case 4:
    uVar2 = thunk_FUN_03f9944c(DAT_09175f08);
    puVar3 = &DAT_0919c040;
    goto LAB_0424a194;
  case 5:
    uVar2 = thunk_FUN_03f9944c(DAT_09175f00);
    puVar3 = &DAT_0919c038;
LAB_0424a194:
    FUN_06e27450(uVar2,*puVar3);
    return uVar2;
  case 6:
    uVar2 = thunk_FUN_03f9944c(DAT_09175ee8);
    FUN_06e27220(uVar2,DAT_0919c020);
    return uVar2;
  case 7:
    uVar2 = thunk_FUN_03f9944c(DAT_09175ef0);
    FUN_06e27338(uVar2,DAT_0919c028);
    return uVar2;
  case 8:
    uVar2 = thunk_FUN_03f9944c(DAT_09175ef8);
    FUN_06e27560(uVar2,DAT_0919c030);
    return uVar2;
  case 9:
    uVar2 = thunk_FUN_03f9944c(DAT_0917b910);
    FUN_0563d9ec(uVar2,DAT_091aa368);
    return uVar2;
  case 10:
    puVar3 = &DAT_09196f10;
    break;
  case 0xb:
    puVar3 = &DAT_09196f18;
    break;
  case 0xc:
    puVar3 = &DAT_09196f20;
    break;
  case 0xd:
    puVar3 = &DAT_09196f60;
    break;
  case 0xe:
    puVar3 = &DAT_09196f68;
    break;
  case 0xf:
    puVar3 = &DAT_09196f70;
    break;
  case 0x10:
    puVar3 = &DAT_09196f78;
    break;
  case 0x11:
    puVar3 = &DAT_09196f80;
    break;
  case 0x12:
    puVar3 = &DAT_09196f88;
    break;
  case 0x13:
    puVar3 = &DAT_09196f90;
    break;
  case 0x14:
    puVar3 = &DAT_09196f98;
    break;
  default:
    goto LAB_0424a234;
  }
  uVar2 = thunk_FUN_03f9944c(*puVar3);
  System_Object___ctor(uVar2,0);
  return uVar2;
}

