// rea decompile_all
// name: MessagePack.Internal.ObjectSerializationInfo.<>c__DisplayClass27_0$$<CreateOrNull>g__CreateEmittableMember|1
// address: 0x73d624c
// body: available
// range: 0x73d624c-0x73d6683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d6638 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d6680 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_Internal_ObjectSerializationInfo_<>c__DisplayClass27_0__<CreateOrNull>g__CreateEmittableMember_1
               (long param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_09520ce6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6da8);
    FUN_03f5c2a4(&DAT_09192e80);
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_09171db8);
    FUN_03f5c2a4(&DAT_09171dc0);
    FUN_03f5c2a4(&DAT_09172558);
    FUN_03f5c2a4(&DAT_09189788);
    FUN_03f5c2a4(&DAT_09201710);
    DAT_09520ce6 = 1;
  }
  uVar3 = DAT_09171dc0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = (**(code **)(*param_2 + 0x1f8))(param_2,uVar3,1,*(undefined8 *)(*param_2 + 0x200));
  uVar3 = DAT_09171db8;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    uVar4 = (**(code **)(*param_2 + 0x1f8))(param_2,uVar3,1,*(undefined8 *)(*param_2 + 0x200));
    uVar3 = DAT_09172558;
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    uVar4 = (**(code **)(*param_2 + 0x1f8))(param_2,uVar3,1,*(undefined8 *)(*param_2 + 0x200));
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    lVar5 = *param_2;
    if ((*(byte *)(lVar5 + 0x130) < *(byte *)(DAT_09189788 + 0x130)) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) !=
        DAT_09189788)) {
      if ((*(byte *)(lVar5 + 0x130) < *(byte *)(DAT_09184518 + 0x130)) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8) !=
          DAT_09184518)) {
        thunk_FUN_03fc39d4(&DAT_09188180);
        uVar3 = thunk_FUN_03f9944c();
        uVar8 = thunk_FUN_03fc39d4(&DAT_09224768);
        MessagePack_MessagePackSerializationException___ctor(uVar3,uVar8,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091ede58);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,uVar8);
      }
      lVar5 = FUN_04a7ba50(param_2,1,DAT_091c6da8);
      if (lVar5 != 0) goto LAB_073d6324;
      uVar4 = System_Reflection_FieldInfo__get_IsStatic(param_2,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      lVar5 = thunk_FUN_03f9944c(DAT_09192e80);
      System_Object___ctor(lVar5,0);
      *(long *)(lVar5 + 0x20) = (long)param_2;
      thunk_FUN_03f5d7b8((long *)(lVar5 + 0x20),param_2);
      if (*(char *)(param_1 + 0x29) == '\0') {
        bVar2 = System_Reflection_FieldInfo__get_IsPublic(param_2,0);
        cVar1 = *(char *)(param_1 + 0x29);
        *(byte *)(lVar5 + 0x12) = bVar2 & 1;
        if (cVar1 == '\0') {
          uVar4 = System_Reflection_FieldInfo__get_IsPublic(param_2,0);
          if ((uVar4 & 1) == 0) goto LAB_073d6610;
          bVar2 = System_Reflection_FieldInfo__get_IsInitOnly(param_2,0);
          goto LAB_073d6608;
        }
        bVar2 = 1;
      }
      else {
        bVar2 = 1;
        *(undefined1 *)(lVar5 + 0x12) = 1;
      }
    }
    else {
      uVar4 = MessagePack_Internal_ReflectionExtensions__IsIndexer(param_2,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0x28) != '\0') {
        uVar3 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        uVar4 = System_String__op_Equality(uVar3,DAT_09201710,0);
        if ((uVar4 & 1) != 0) {
          return 0;
        }
      }
      lVar6 = (**(code **)(*param_2 + 0x2e8))(param_2,1,*(undefined8 *)(*param_2 + 0x2f0));
      lVar7 = (**(code **)(*param_2 + 0x318))(param_2,1,*(undefined8 *)(*param_2 + 800));
      lVar5 = thunk_FUN_03f9944c(DAT_09192e80);
      System_Object___ctor(lVar5,0);
      *(long *)(lVar5 + 0x20) = (long)param_2;
      thunk_FUN_03f5d7b8((long *)(lVar5 + 0x20),param_2);
      if ((lVar6 == 0) ||
         ((*(char *)(param_1 + 0x29) == '\0' &&
          (uVar4 = System_Reflection_MethodBase__get_IsPublic(lVar6,0), (uVar4 & 1) == 0)))) {
        bVar2 = 0;
      }
      else {
        bVar2 = System_Reflection_MethodBase__get_IsStatic(lVar6,0);
        bVar2 = bVar2 ^ 1;
      }
      *(byte *)(lVar5 + 0x12) = bVar2 & 1;
      if ((lVar7 == 0) ||
         ((*(char *)(param_1 + 0x29) == '\0' &&
          (uVar4 = System_Reflection_MethodBase__get_IsPublic(lVar7,0), (uVar4 & 1) == 0)))) {
LAB_073d6610:
        bVar2 = 0;
      }
      else {
        bVar2 = System_Reflection_MethodBase__get_IsStatic(lVar7,0);
LAB_073d6608:
        bVar2 = bVar2 ^ 1;
      }
    }
    *(byte *)(lVar5 + 0x10) = bVar2 & 1;
    if (*(char *)(lVar5 + 0x12) == '\0' && (bVar2 & 1) == 0) {
      lVar5 = 0;
    }
  }
  else {
LAB_073d6324:
    lVar5 = 0;
  }
  return lVar5;
}

