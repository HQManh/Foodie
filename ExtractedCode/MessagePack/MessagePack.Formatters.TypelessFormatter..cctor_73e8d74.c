// rea decompile_all
// name: MessagePack.Formatters.TypelessFormatter$$.cctor
// address: 0x73e8d74
// body: available
// range: 0x73e8d74-0x73e95a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e95a0 to 0x6361478 FUN_06361478 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73e95a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Formatters_TypelessFormatter___cctor(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_09520dd9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197360);
    FUN_03f5c2a4(&DAT_09175048);
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_091791e8);
    FUN_03f5c2a4(&DAT_091791e0);
    FUN_03f5c2a4(&DAT_091a8848);
    FUN_03f5c2a4(&DAT_091a8830);
    FUN_03f5c2a4(&DAT_09179f30);
    FUN_03f5c2a4(&DAT_09170a40);
    FUN_03f5c2a4(&DAT_09170a70);
    FUN_03f5c2a4(&DAT_09170a30);
    FUN_03f5c2a4(&DAT_09170a20);
    FUN_03f5c2a4(&DAT_09170a88);
    FUN_03f5c2a4(&DAT_091709e8);
    FUN_03f5c2a4(&DAT_09170a68);
    FUN_03f5c2a4(&DAT_09170a38);
    FUN_03f5c2a4(&DAT_09170a90);
    FUN_03f5c2a4(&DAT_091709f0);
    FUN_03f5c2a4(&DAT_09170a98);
    FUN_03f5c2a4(&DAT_0918b340);
    FUN_03f5c2a4(&DAT_091bd4d0);
    FUN_03f5c2a4(&DAT_091bd4f0);
    FUN_03f5c2a4(&DAT_091bd450);
    FUN_03f5c2a4(&DAT_091bd4e0);
    FUN_03f5c2a4(&DAT_091bd4c0);
    FUN_03f5c2a4(&DAT_0917ee50);
    FUN_03f5c2a4(&DAT_0917ee78);
    FUN_03f5c2a4(&DAT_0917ee80);
    FUN_03f5c2a4(&DAT_0918c300);
    FUN_03f5c2a4(&DAT_091f1180);
    FUN_03f5c2a4(&DAT_091f1188);
    FUN_03f5c2a4(&DAT_09195408);
    FUN_03f5c2a4(&DAT_0921f960);
    DAT_09520dd9 = 1;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_0918c300);
  System_Object___ctor(uVar2,0);
  **(undefined8 **)(DAT_0918c300 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918c300 + 0xb8),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917ee80);
  FUN_06361290(0x3f400000,uVar2,4,DAT_091bd4e0);
  puVar3 = (undefined8 *)(*(long *)(DAT_0918c300 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917ee78);
  FUN_06361290(0x3f400000,uVar2,4,DAT_091bd4c0);
  puVar3 = (undefined8 *)(*(long *)(DAT_0918c300 + 0xb8) + 0x10);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917ee50);
  FUN_06361290(0x3f400000,uVar2,4,DAT_091bd450);
  puVar3 = (undefined8 *)(*(long *)(DAT_0918c300 + 0xb8) + 0x18);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917ee50);
  FUN_06361290(0x3f400000,uVar2,4,DAT_091bd450);
  puVar3 = (undefined8 *)(*(long *)(DAT_0918c300 + 0xb8) + 0x20);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0918b340);
  MessagePack_Internal_StringArraySegmentByteAscymmetricEqualityComparer___ctor(uVar2,0);
  uVar4 = thunk_FUN_03f9944c(DAT_09175048);
  FUN_063f4904(uVar4,uVar2,DAT_09197360);
  puVar3 = (undefined8 *)(*(long *)(DAT_0918c300 + 0xb8) + 0x28);
  *puVar3 = uVar4;
  thunk_FUN_03f5d7b8(puVar3,uVar4);
  lVar5 = thunk_FUN_03f9944c(DAT_09179f30);
  FUN_053eb530(lVar5,DAT_091a8830);
  lVar7 = DAT_09535400;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(lVar7 + 0x20,0);
  if (lVar5 != 0) {
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535408 + 0x20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535410 + 0x20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535418 + 0x20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535428 + 0x20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535440 + 0x20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535450 + 0x20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535458 + 0x20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170bb0,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091709e8,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a68,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091709f0,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a30,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a88,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a38,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a90,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a40,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a98,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a70,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a20,0);
    FUN_053ec72c(lVar5,uVar2,DAT_091a8848);
    plVar6 = (long *)(*(long *)(DAT_0918c300 + 0xb8) + 0x30);
    *plVar6 = lVar5;
    thunk_FUN_03f5d7b8(plVar6,lVar5);
    plVar6 = (long *)System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
    if (plVar6 != (long *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x2e8))(plVar6,*(undefined8 *)(*plVar6 + 0x2f0));
      if (lVar7 != 0) {
        bVar1 = System_String__Contains(lVar7,DAT_0921f960,0);
        lVar7 = DAT_095353e8 + 0x20;
        lVar5 = *(long *)(*(long *)(DAT_0918c300 + 0xb8) + 8);
        *(byte *)(*(long *)(DAT_0918c300 + 0xb8) + 0x38) = bVar1 & 1;
        uVar2 = System_Type__GetTypeFromHandle(lVar7,0);
        if (*(int *)(DAT_09195408 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09195408);
        }
        uVar8 = **(undefined8 **)(DAT_09195408 + 0xb8);
        uVar4 = thunk_FUN_03f9944c(DAT_091791e8);
        FUN_05324070(uVar4,uVar8,DAT_091f1180,0);
        if (lVar5 != 0) {
          FUN_06361478(lVar5,uVar2,uVar4,DAT_091bd4f0);
          lVar7 = *(long *)(*(long *)(DAT_0918c300 + 0xb8) + 0x10);
          uVar2 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
          uVar8 = **(undefined8 **)(DAT_09195408 + 0xb8);
          uVar4 = thunk_FUN_03f9944c(DAT_091791e0);
          FUN_05324070(uVar4,uVar8,DAT_091f1188,0);
          if (lVar7 != 0) {
            FUN_06361478(lVar7,uVar2,uVar4,DAT_091bd4d0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

