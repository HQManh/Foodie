// rea decompile_all
// name: MessagePack.ImmutableCollection.ImmutableCollectionGetFormatterHelper$$GetFormatter
// address: 0x73d7dc4
// body: available
// range: 0x73d7dc4-0x73d8143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d813c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d8140 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_ImmutableCollection_ImmutableCollectionGetFormatterHelper__GetFormatter
          (undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ushort local_3c [2];
  undefined8 local_38;
  
  if ((DAT_09520cf2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_091a0de8);
    FUN_03f5c2a4(&DAT_09171de0);
    FUN_03f5c2a4(&DAT_09186ae8);
    FUN_03f5c2a4(&DAT_091725b8);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09520cf2 = 1;
  }
  local_38 = 0;
  plVar3 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(param_1,0);
  if (plVar3 == (long *)0x0) {
LAB_073d813c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = (**(code **)(*plVar3 + 0x3d8))(plVar3,*(undefined8 *)(*plVar3 + 0x3e0));
  if ((uVar4 & 1) == 0) {
LAB_073d8124:
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x468))(plVar3,*(undefined8 *)(*plVar3 + 0x470));
    System_Reflection_IntrospectionExtensions__GetTypeInfo(uVar5,0);
    bVar1 = MessagePack_ImmutableCollection_ReflectionExtensions__IsNullable();
    plVar9 = (long *)0x0;
    if ((bVar1 & 1) != 0) {
      lVar6 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
      if (lVar6 == 0) goto LAB_073d813c;
      if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar9 = *(long **)(lVar6 + 0x20);
    }
    if (*(int *)(DAT_09186ae8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09186ae8 + 0xb8) == 0) goto LAB_073d813c;
    uVar4 = FUN_06fd9fbc(**(long **)(DAT_09186ae8 + 0xb8),uVar5,&local_38,DAT_091a0de8);
    uVar5 = local_38;
    if ((uVar4 & 1) == 0) {
      if ((bVar1 & plVar9 != (long *)0x0) != 1) goto LAB_073d8124;
      uVar2 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
      local_3c[0] = 0;
      FUN_05c290f8(local_3c,uVar2 & 1,DAT_091b6a48);
      if (local_3c[0] < 0x100) {
        return 0;
      }
      if ((local_3c[0] & 0xff) == 0) {
        return 0;
      }
      uVar10 = (**(code **)(*plVar9 + 0x468))(plVar9,*(undefined8 *)(*plVar9 + 0x470));
      uVar5 = DAT_09171de0;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
      uVar4 = System_Type__op_Equality(uVar10,uVar5,0);
      uVar5 = DAT_091725b8;
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
      lVar6 = FUN_03f5c394(DAT_09180748,1);
      if (lVar6 == 0) goto LAB_073d813c;
      FUN_039b0da0(lVar6,plVar9);
      FUN_039af17c(lVar6,0,plVar9);
      uVar10 = FUN_03eabcb4(DAT_091c0270);
      if (*(int *)(DAT_09186ae8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09186ae8);
      }
    }
    else {
      lVar6 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
      lVar7 = DAT_091c0270;
      lVar8 = *(long *)(DAT_091c0270 + 0x38);
      if (lVar8 == 0) {
        FUN_03f95ac8(DAT_091c0270);
        lVar8 = *(long *)(lVar7 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      uVar10 = **(undefined8 **)(lVar7 + 0xb8);
      if (*(int *)(DAT_09186ae8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09186ae8);
      }
    }
    uVar5 = MessagePack_ImmutableCollection_ImmutableCollectionGetFormatterHelper__CreateInstance
                      (uVar5,lVar6,uVar10);
  }
  return uVar5;
}

