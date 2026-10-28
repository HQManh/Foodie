// rea decompile_all
// name: MessagePack.MessagePackSerializer.CompiledMethods$$.ctor
// address: 0x7396a68
// body: available
// range: 0x7396a68-0x7399777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73987b0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7399760 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7399764 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7399768 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7399774 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackSerializer_CompiledMethods___ctor(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  
  if ((DAT_09520b09 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174fc8);
    FUN_03f5c2a4(&DAT_09174fb0);
    FUN_03f5c2a4(&DAT_09171150);
    FUN_03f5c2a4(&DAT_09183e08);
    FUN_03f5c2a4(&DAT_0917fee8);
    FUN_03f5c2a4(&DAT_091a7768);
    FUN_03f5c2a4(&DAT_091a7748);
    FUN_03f5c2a4(&DAT_091a7750);
    FUN_03f5c2a4(&DAT_091a7760);
    FUN_03f5c2a4(&DAT_091a7740);
    FUN_03f5c2a4(&DAT_091a7758);
    FUN_03f5c2a4(&DAT_091a7730);
    FUN_03f5c2a4(&DAT_091a7728);
    FUN_03f5c2a4(&DAT_091cbb70);
    FUN_03f5c2a4(&DAT_091cbb68);
    FUN_03f5c2a4(&DAT_091cbbd0);
    FUN_03f5c2a4(&DAT_091cbbd8);
    FUN_03f5c2a4(&DAT_091cbbb8);
    FUN_03f5c2a4(&DAT_091cbbc8);
    FUN_03f5c2a4(&DAT_091cbbc0);
    FUN_03f5c2a4(&DAT_091cbbe0);
    FUN_03f5c2a4(&DAT_091843a0);
    FUN_03f5c2a4(&DAT_09179c08);
    FUN_03f5c2a4(&DAT_09179c10);
    FUN_03f5c2a4(&DAT_09179bc8);
    FUN_03f5c2a4(&DAT_09179c00);
    FUN_03f5c2a4(&DAT_09179bd0);
    FUN_03f5c2a4(&DAT_09179c68);
    FUN_03f5c2a4(&DAT_091708a8);
    FUN_03f5c2a4(&DAT_09174308);
    FUN_03f5c2a4(&DAT_09196a08);
    FUN_03f5c2a4(&DAT_09172418);
    FUN_03f5c2a4(&DAT_09172438);
    FUN_03f5c2a4(&DAT_09174310);
    FUN_03f5c2a4(&DAT_09196a10);
    FUN_03f5c2a4(&DAT_09172440);
    FUN_03f5c2a4(&DAT_09180368);
    FUN_03f5c2a4(&DAT_09170ab8);
    FUN_03f5c2a4(&DAT_09170ac0);
    FUN_03f5c2a4(&DAT_09172f10);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091f32d0);
    FUN_03f5c2a4(&DAT_091f32d8);
    FUN_03f5c2a4(&DAT_091f32e0);
    FUN_03f5c2a4(&DAT_091969c0);
    FUN_03f5c2a4(&DAT_091f32e8);
    FUN_03f5c2a4(&DAT_091969c8);
    FUN_03f5c2a4(&DAT_091f32f0);
    FUN_03f5c2a4(&DAT_091969d0);
    FUN_03f5c2a4(&DAT_091f32f8);
    FUN_03f5c2a4(&DAT_091969d8);
    FUN_03f5c2a4(&DAT_091f3300);
    FUN_03f5c2a4(&DAT_091969e0);
    FUN_03f5c2a4(&DAT_091f3308);
    FUN_03f5c2a4(&DAT_091969e8);
    FUN_03f5c2a4(&DAT_091f3310);
    FUN_03f5c2a4(&DAT_091969f0);
    FUN_03f5c2a4(&DAT_091f3318);
    FUN_03f5c2a4(&DAT_091969f8);
    FUN_03f5c2a4(&DAT_091969b8);
    FUN_03f5c2a4(&DAT_09170b98);
    FUN_03f5c2a4(&DAT_0920cb98);
    FUN_03f5c2a4(&DAT_09200780);
    FUN_03f5c2a4(&DAT_0920cbb8);
    FUN_03f5c2a4(&DAT_092258f0);
    FUN_03f5c2a4(&DAT_092007a0);
    FUN_03f5c2a4(&DAT_092201e0);
    FUN_03f5c2a4(&DAT_0920cba0);
    FUN_03f5c2a4(&DAT_09218720);
    FUN_03f5c2a4(&DAT_092188a8);
    FUN_03f5c2a4(&DAT_092206f0);
    FUN_03f5c2a4(&DAT_09200768);
    FUN_03f5c2a4(&DAT_092235d8);
    DAT_09520b09 = 1;
  }
  System_Object___ctor(param_1,0);
  lVar1 = System_Reflection_IntrospectionExtensions__GetTypeInfo(param_2,0);
  lVar2 = thunk_FUN_03f9944c(DAT_091969c0);
  System_Object___ctor(lVar2,0);
  plVar3 = (long *)FUN_03f5c394(DAT_09180748,3);
  uVar6 = DAT_09172438;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  lVar4 = System_Type__GetTypeFromHandle(uVar6,0);
  if (plVar3 == (long *)0x0) goto LAB_07399768;
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
  goto LAB_0739976c;
  if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_07399764;
  plVar3[5] = lVar4;
  thunk_FUN_03f5d7b8(plVar3 + 5,lVar4);
  lVar4 = System_Type__GetTypeFromHandle(DAT_09171150,0);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
  goto LAB_0739976c;
  if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
  plVar3[6] = lVar4;
  thunk_FUN_03f5d7b8(plVar3 + 6,lVar4);
  uVar6 = MessagePack_MessagePackSerializer_CompiledMethods__GetMethod(DAT_0920cb98,param_2,plVar3);
  if (lVar2 == 0) goto LAB_07399768;
  puVar13 = (undefined8 *)(lVar2 + 0x10);
  *puVar13 = uVar6;
  thunk_FUN_03f5d7b8(puVar13,uVar6);
  if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = DAT_095353e8;
  if (**(char **)(DAT_09183e08 + 0xb8) == '\0') {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_Type__GetTypeFromHandle(lVar4 + 0x20,0);
    if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091843a0);
    }
    lVar2 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092201e0,0);
    uVar6 = System_Type__GetTypeFromHandle(DAT_09172438,0);
    lVar4 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092206f0,0);
    uVar6 = System_Type__GetTypeFromHandle(DAT_09171150,0);
    lVar5 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092188a8,0);
    if (lVar1 == 0) goto LAB_07399768;
    uVar6 = *puVar13;
    uVar10 = System_Type__get_IsValueType(lVar1,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = System_Linq_Expressions_Expression__Convert(lVar2,param_2,0);
    }
    else {
      if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = System_Linq_Expressions_Expression__Unbox(lVar2,param_2,0);
    }
    if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_Linq_Expressions_Expression__Call(0,uVar6,uVar12,lVar4,lVar5,0);
    plVar3 = (long *)FUN_03f5c394(DAT_09180368,3);
    if (plVar3 == (long *)0x0) goto LAB_07399768;
    if ((lVar2 != 0) &&
       (lVar8 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0))
    goto LAB_0739976c;
    if ((int)plVar3[3] == 0) goto LAB_07399764;
    plVar3[4] = lVar2;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
    if ((lVar4 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
    goto LAB_0739976c;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_07399764;
    plVar3[5] = lVar4;
    thunk_FUN_03f5d7b8(plVar3 + 5,lVar4);
    if ((lVar5 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
    goto LAB_0739976c;
    if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
    plVar3[6] = lVar5;
    thunk_FUN_03f5d7b8(plVar3 + 6,lVar5);
    lVar2 = FUN_04b212ac(uVar6,plVar3,DAT_091cbbc8);
    if (DAT_09520b34 == '\0') {
      FUN_03f5c2a4(&DAT_09183e08);
      DAT_09520b34 = '\x01';
    }
    if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar2 == 0) goto LAB_07399768;
    uVar6 = FUN_05237a80(lVar2,**(undefined1 **)(DAT_09183e08 + 0xb8),DAT_091a7750);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    thunk_FUN_03f5d7b8();
  }
  else {
    uVar6 = thunk_FUN_03f9944c(DAT_09179c00);
    FUN_053361d4(uVar6,lVar2,DAT_091f32e0,0);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar6);
  }
  lVar2 = thunk_FUN_03f9944c(DAT_091969c8);
  System_Object___ctor(lVar2,0);
  plVar3 = (long *)FUN_03f5c394(DAT_09180748,4);
  uVar6 = DAT_09172f10;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  lVar4 = System_Type__GetTypeFromHandle(uVar6,0);
  if (plVar3 == (long *)0x0) goto LAB_07399768;
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
  goto LAB_0739976c;
  if ((int)plVar3[3] == 0) goto LAB_07399764;
  plVar3[4] = lVar4;
  thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
  lVar4 = System_Type__GetTypeFromHandle(DAT_09172438,0);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
  goto LAB_0739976c;
  if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
  plVar3[6] = lVar4;
  thunk_FUN_03f5d7b8(plVar3 + 6,lVar4);
  lVar4 = System_Type__GetTypeFromHandle(DAT_09171150,0);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
  goto LAB_0739976c;
  if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_07399764;
  plVar3[7] = lVar4;
  thunk_FUN_03f5d7b8(plVar3 + 7,lVar4);
  uVar6 = MessagePack_MessagePackSerializer_CompiledMethods__GetMethod(DAT_0920cb98,param_2,plVar3);
  if (lVar2 != 0) {
    puVar13 = (undefined8 *)(lVar2 + 0x10);
    *puVar13 = uVar6;
    thunk_FUN_03f5d7b8(puVar13,uVar6);
    if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = DAT_09172f10;
    if (**(char **)(DAT_09183e08 + 0xb8) == '\0') {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
      if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091843a0);
      }
      lVar2 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092235d8,0);
      uVar6 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
      lVar4 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092201e0,0);
      uVar6 = System_Type__GetTypeFromHandle(DAT_09172438,0);
      lVar5 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092206f0,0);
      uVar6 = System_Type__GetTypeFromHandle(DAT_09171150,0);
      lVar8 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092188a8,0);
      uVar6 = *puVar13;
      plVar3 = (long *)FUN_03f5c394(DAT_0917fee8,4);
      if (plVar3 == (long *)0x0) goto LAB_07399768;
      if ((lVar2 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
      goto LAB_0739976c;
      if ((int)plVar3[3] == 0) goto LAB_07399764;
      plVar3[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
      if (lVar1 == 0) goto LAB_07399768;
      uVar10 = System_Type__get_IsValueType(lVar1,0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = System_Linq_Expressions_Expression__Convert(lVar4,param_2,0);
      }
      else {
        if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = System_Linq_Expressions_Expression__Unbox(lVar4,param_2,0);
      }
      if ((lVar9 != 0) &&
         (lVar7 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_07399764;
      plVar3[5] = lVar9;
      thunk_FUN_03f5d7b8(plVar3 + 5,lVar9);
      if ((lVar5 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
      goto LAB_0739976c;
      if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
      plVar3[6] = lVar5;
      thunk_FUN_03f5d7b8(plVar3 + 6,lVar5);
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_07399764;
      plVar3[7] = lVar8;
      thunk_FUN_03f5d7b8(plVar3 + 7,lVar8);
      if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Linq_Expressions_Expression__Call(0,uVar6,plVar3,0);
      plVar3 = (long *)FUN_03f5c394(DAT_09180368,4);
      if (plVar3 == (long *)0x0) goto LAB_07399768;
      if ((lVar2 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
      goto LAB_0739976c;
      if ((int)plVar3[3] == 0) goto LAB_07399764;
      plVar3[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
      if ((lVar4 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_07399764;
      plVar3[5] = lVar4;
      thunk_FUN_03f5d7b8(plVar3 + 5,lVar4);
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
      goto LAB_0739976c;
      if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
      plVar3[6] = lVar5;
      thunk_FUN_03f5d7b8(plVar3 + 6,lVar5);
      if ((lVar8 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_07399764;
      plVar3[7] = lVar8;
      thunk_FUN_03f5d7b8(plVar3 + 7,lVar8);
      lVar2 = FUN_04b212ac(uVar6,plVar3,DAT_091cbb70);
      if (DAT_09520b34 == '\0') {
        FUN_03f5c2a4(&DAT_09183e08);
        DAT_09520b34 = '\x01';
      }
      if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar2 == 0) goto LAB_07399768;
      uVar6 = FUN_05237a80(lVar2,**(undefined1 **)(DAT_09183e08 + 0xb8),DAT_091a7730);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
    }
    else {
      uVar6 = thunk_FUN_03f9944c(DAT_09174fc8);
      FUN_071d0be8(uVar6,lVar2,DAT_091f32e8,0);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
    }
    thunk_FUN_03f5d7b8(param_1 + 0x18,uVar6);
    lVar2 = thunk_FUN_03f9944c(DAT_091969d0);
    System_Object___ctor(lVar2,0);
    plVar3 = (long *)FUN_03f5c394(DAT_09180748,4);
    uVar6 = DAT_09172f10;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    lVar4 = System_Type__GetTypeFromHandle(uVar6,0);
    if (plVar3 == (long *)0x0) goto LAB_07399768;
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0739976c;
    if ((int)plVar3[3] == 0) goto LAB_07399764;
    plVar3[4] = lVar4;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
    lVar4 = System_Type__GetTypeFromHandle(DAT_09172438,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0739976c;
    if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
    plVar3[6] = lVar4;
    thunk_FUN_03f5d7b8(plVar3 + 6,lVar4);
    lVar4 = System_Type__GetTypeFromHandle(DAT_09171150,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0739976c;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_07399764;
    plVar3[7] = lVar4;
    thunk_FUN_03f5d7b8(plVar3 + 7,lVar4);
    uVar6 = MessagePack_MessagePackSerializer_CompiledMethods__GetMethod
                      (DAT_0920cba0,param_2,plVar3);
    if (lVar2 == 0) goto LAB_07399768;
    puVar13 = (undefined8 *)(lVar2 + 0x10);
    *puVar13 = uVar6;
    thunk_FUN_03f5d7b8(puVar13,uVar6);
    if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = DAT_09172f10;
    if (**(char **)(DAT_09183e08 + 0xb8) == '\0') {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
      if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091843a0);
      }
      lVar2 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092235d8,0);
      uVar6 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
      lVar4 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092201e0,0);
      uVar6 = System_Type__GetTypeFromHandle(DAT_09172438,0);
      lVar5 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092206f0,0);
      uVar6 = System_Type__GetTypeFromHandle(DAT_09171150,0);
      lVar8 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092188a8,0);
      uVar6 = *puVar13;
      plVar3 = (long *)FUN_03f5c394(DAT_0917fee8,4);
      if (plVar3 == (long *)0x0) goto LAB_07399768;
      if ((lVar2 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
      goto LAB_0739976c;
      if ((int)plVar3[3] == 0) goto LAB_07399764;
      plVar3[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
      if (lVar1 == 0) goto LAB_07399768;
      uVar10 = System_Type__get_IsValueType(lVar1,0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = System_Linq_Expressions_Expression__Convert(lVar4,param_2,0);
      }
      else {
        if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = System_Linq_Expressions_Expression__Unbox(lVar4,param_2,0);
      }
      if ((lVar9 != 0) &&
         (lVar7 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_07399764;
      plVar3[5] = lVar9;
      thunk_FUN_03f5d7b8(plVar3 + 5,lVar9);
      if ((lVar5 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
      goto LAB_0739976c;
      if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
      plVar3[6] = lVar5;
      thunk_FUN_03f5d7b8(plVar3 + 6,lVar5);
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_07399764;
      plVar3[7] = lVar8;
      thunk_FUN_03f5d7b8(plVar3 + 7,lVar8);
      if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Linq_Expressions_Expression__Call(0,uVar6,plVar3,0);
      plVar3 = (long *)FUN_03f5c394(DAT_09180368,4);
      if (plVar3 == (long *)0x0) goto LAB_07399768;
      if ((lVar2 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
      goto LAB_0739976c;
      if ((int)plVar3[3] == 0) goto LAB_07399764;
      plVar3[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
      if ((lVar4 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_07399764;
      plVar3[5] = lVar4;
      thunk_FUN_03f5d7b8(plVar3 + 5,lVar4);
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
      goto LAB_0739976c;
      if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
      plVar3[6] = lVar5;
      thunk_FUN_03f5d7b8(plVar3 + 6,lVar5);
      if ((lVar8 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_07399764;
      plVar3[7] = lVar8;
      thunk_FUN_03f5d7b8(plVar3 + 7,lVar8);
      lVar2 = FUN_04b212ac(uVar6,plVar3,DAT_091cbbe0);
      if (DAT_09520b34 == '\0') {
        FUN_03f5c2a4(&DAT_09183e08);
        DAT_09520b34 = '\x01';
      }
      if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar2 == 0) goto LAB_07399768;
      uVar6 = FUN_05237a80(lVar2,**(undefined1 **)(DAT_09183e08 + 0xb8),DAT_091a7768);
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      thunk_FUN_03f5d7b8();
    }
    else {
      uVar6 = thunk_FUN_03f9944c(DAT_09179c68);
      FUN_05336f74(uVar6,lVar2,DAT_091f32f0,0);
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar6);
    }
    lVar2 = thunk_FUN_03f9944c(DAT_091969d8);
    System_Object___ctor(lVar2,0);
    plVar3 = (long *)FUN_03f5c394(DAT_09180748,4);
    uVar6 = DAT_091708a8;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    lVar4 = System_Type__GetTypeFromHandle(uVar6,0);
    if (plVar3 == (long *)0x0) goto LAB_07399768;
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0739976c;
    if ((int)plVar3[3] == 0) goto LAB_07399764;
    plVar3[4] = lVar4;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
    lVar4 = System_Type__GetTypeFromHandle(DAT_09172438,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0739976c;
    if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
    plVar3[6] = lVar4;
    thunk_FUN_03f5d7b8(plVar3 + 6,lVar4);
    lVar4 = System_Type__GetTypeFromHandle(DAT_09171150,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0739976c;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_07399764;
    plVar3[7] = lVar4;
    thunk_FUN_03f5d7b8(plVar3 + 7,lVar4);
    uVar6 = MessagePack_MessagePackSerializer_CompiledMethods__GetMethod
                      (DAT_0920cb98,param_2,plVar3);
    if (lVar2 == 0) goto LAB_07399768;
    puVar13 = (undefined8 *)(lVar2 + 0x10);
    *puVar13 = uVar6;
    thunk_FUN_03f5d7b8(puVar13,uVar6);
    if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = DAT_091708a8;
    if (**(char **)(DAT_09183e08 + 0xb8) == '\0') {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
      if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091843a0);
      }
      lVar2 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092258f0,0);
      uVar6 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
      lVar4 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092201e0,0);
      uVar6 = System_Type__GetTypeFromHandle(DAT_09172438,0);
      lVar5 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092206f0,0);
      uVar6 = System_Type__GetTypeFromHandle(DAT_09171150,0);
      lVar8 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092188a8,0);
      uVar6 = *puVar13;
      plVar3 = (long *)FUN_03f5c394(DAT_0917fee8,4);
      if (plVar3 == (long *)0x0) goto LAB_07399768;
      if ((lVar2 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
      goto LAB_0739976c;
      if ((int)plVar3[3] == 0) goto LAB_07399764;
      plVar3[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
      if (lVar1 == 0) goto LAB_07399768;
      uVar10 = System_Type__get_IsValueType(lVar1,0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar1 = System_Linq_Expressions_Expression__Convert(lVar4,param_2,0);
      }
      else {
        if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar1 = System_Linq_Expressions_Expression__Unbox(lVar4,param_2,0);
      }
      if ((lVar1 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_07399764;
      plVar3[5] = lVar1;
      thunk_FUN_03f5d7b8(plVar3 + 5,lVar1);
      if ((lVar5 != 0) &&
         (lVar1 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
      goto LAB_0739976c;
      if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
      plVar3[6] = lVar5;
      thunk_FUN_03f5d7b8(plVar3 + 6,lVar5);
      if ((lVar8 != 0) &&
         (lVar1 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_07399764;
      plVar3[7] = lVar8;
      thunk_FUN_03f5d7b8(plVar3 + 7,lVar8);
      if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Linq_Expressions_Expression__Call(0,uVar6,plVar3,0);
      plVar3 = (long *)FUN_03f5c394(DAT_09180368,4);
      if (plVar3 == (long *)0x0) goto LAB_07399768;
      if ((lVar2 != 0) &&
         (lVar1 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
      goto LAB_0739976c;
      if ((int)plVar3[3] == 0) goto LAB_07399764;
      plVar3[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
      if ((lVar4 != 0) &&
         (lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_07399764;
      plVar3[5] = lVar4;
      thunk_FUN_03f5d7b8(plVar3 + 5,lVar4);
      if ((lVar5 != 0) &&
         (lVar1 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
      goto LAB_0739976c;
      if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
      plVar3[6] = lVar5;
      thunk_FUN_03f5d7b8(plVar3 + 6,lVar5);
      if ((lVar8 != 0) &&
         (lVar1 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
      goto LAB_0739976c;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_07399764;
      plVar3[7] = lVar8;
      thunk_FUN_03f5d7b8(plVar3 + 7,lVar8);
      lVar1 = FUN_04b212ac(uVar6,plVar3,DAT_091cbb68);
      if (DAT_09520b34 == '\0') {
        FUN_03f5c2a4(&DAT_09183e08);
        DAT_09520b34 = '\x01';
      }
      if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar1 == 0) goto LAB_07399768;
      uVar6 = FUN_05237a80(lVar1,**(undefined1 **)(DAT_09183e08 + 0xb8),DAT_091a7728);
      *(undefined8 *)(param_1 + 0x30) = uVar6;
    }
    else {
      uVar6 = thunk_FUN_03f9944c(DAT_09174fb0);
      FUN_071d0be8(uVar6,lVar2,DAT_091f32f8,0);
      *(undefined8 *)(param_1 + 0x30) = uVar6;
    }
    thunk_FUN_03f5d7b8(param_1 + 0x30,uVar6);
    plVar3 = (long *)FUN_03f5c394(DAT_09180748,3);
    uVar6 = DAT_09172440;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    plVar11 = (long *)System_Type__GetTypeFromHandle(uVar6,0);
    if ((plVar11 == (long *)0x0) ||
       (lVar1 = (**(code **)(*plVar11 + 0x938))(plVar11,*(undefined8 *)(*plVar11 + 0x940)),
       plVar3 == (long *)0x0)) goto LAB_07399768;
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
    goto LAB_0739976c;
    if ((int)plVar3[3] == 0) goto LAB_07399764;
    plVar3[4] = lVar1;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar1);
    lVar1 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
    goto LAB_0739976c;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_07399764;
    plVar3[5] = lVar1;
    thunk_FUN_03f5d7b8(plVar3 + 5,lVar1);
    lVar1 = System_Type__GetTypeFromHandle(DAT_09172438,0);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
    goto LAB_0739976c;
    if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
    plVar3[6] = lVar1;
    thunk_FUN_03f5d7b8(plVar3 + 6,lVar1);
    plVar3 = (long *)MessagePack_MessagePackSerializer_CompiledMethods__GetMethod
                               (DAT_0920cbb8,param_2,plVar3);
    if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183e08);
    }
    uVar6 = DAT_09174310;
    if (**(char **)(DAT_09183e08 + 0xb8) == '\0') {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
      if (plVar3 == (long *)0x0) goto LAB_07399768;
      plVar3 = (long *)(**(code **)(*plVar3 + 0x448))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x450))
      ;
      lVar1 = DAT_09196a10;
      if (plVar3 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      else if ((*plVar3 != DAT_09196a10) || (*(long **)(param_1 + 0x28) = plVar3, *plVar3 != lVar1))
      goto LAB_073987ac;
    }
    else {
      if (*(int *)(DAT_091969b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar13 = *(undefined8 **)(DAT_091969b8 + 0xb8);
      plVar3 = (long *)puVar13[1];
      if (plVar3 == (long *)0x0) {
        if (*(int *)(DAT_091969b8 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar13 = *(undefined8 **)(DAT_091969b8 + 0xb8);
        }
        uVar6 = *puVar13;
        plVar3 = (long *)thunk_FUN_03f9944c(DAT_09196a10);
        MessagePack_MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize___ctor
                  (plVar3,uVar6,DAT_091f32d0);
        plVar11 = (long *)(*(long *)(DAT_091969b8 + 0xb8) + 8);
        *plVar11 = (long)plVar3;
        thunk_FUN_03f5d7b8(plVar11,plVar3);
      }
      *(long **)(param_1 + 0x28) = plVar3;
    }
    thunk_FUN_03f5d7b8(param_1 + 0x28,plVar3);
    plVar3 = (long *)FUN_03f5c394(DAT_09180748,2);
    uVar6 = DAT_09172418;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    plVar11 = (long *)System_Type__GetTypeFromHandle(uVar6,0);
    if ((plVar11 != (long *)0x0) &&
       (lVar1 = (**(code **)(*plVar11 + 0x938))(plVar11,*(undefined8 *)(*plVar11 + 0x940)),
       plVar3 != (long *)0x0)) {
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0)) {
LAB_0739976c:
        uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,0);
      }
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar1;
        thunk_FUN_03f5d7b8(plVar3 + 4,lVar1);
        lVar1 = System_Type__GetTypeFromHandle(DAT_09172438,0);
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
        goto LAB_0739976c;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
          plVar3[5] = lVar1;
          thunk_FUN_03f5d7b8(plVar3 + 5,lVar1);
          plVar3 = (long *)MessagePack_MessagePackSerializer_CompiledMethods__GetMethod
                                     (DAT_092007a0,param_2,plVar3);
          if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183e08);
          }
          uVar6 = DAT_09174308;
          if (**(char **)(DAT_09183e08 + 0xb8) == '\0') {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
            if (plVar3 == (long *)0x0) goto LAB_07399768;
            plVar3 = (long *)(**(code **)(*plVar3 + 0x448))
                                       (plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x450));
            lVar1 = DAT_09196a08;
            if (plVar3 == (long *)0x0) {
              *(undefined8 *)(param_1 + 0x38) = 0;
            }
            else if ((*plVar3 != DAT_09196a08) ||
                    (*(long **)(param_1 + 0x38) = plVar3, *plVar3 != lVar1)) {
LAB_073987ac:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar3);
            }
          }
          else {
            if (*(int *)(DAT_091969b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar13 = *(undefined8 **)(DAT_091969b8 + 0xb8);
            plVar3 = (long *)puVar13[2];
            if (plVar3 == (long *)0x0) {
              if (*(int *)(DAT_091969b8 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar13 = *(undefined8 **)(DAT_091969b8 + 0xb8);
              }
              uVar6 = *puVar13;
              plVar3 = (long *)thunk_FUN_03f9944c(DAT_09196a08);
              MessagePack_MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize___ctor
                        (plVar3,uVar6,DAT_091f32d8);
              plVar11 = (long *)(*(long *)(DAT_091969b8 + 0xb8) + 0x10);
              *plVar11 = (long)plVar3;
              thunk_FUN_03f5d7b8(plVar11,plVar3);
            }
            *(long **)(param_1 + 0x38) = plVar3;
          }
          thunk_FUN_03f5d7b8(param_1 + 0x38,plVar3);
          lVar1 = thunk_FUN_03f9944c(DAT_091969e0);
          System_Object___ctor(lVar1,0);
          plVar3 = (long *)FUN_03f5c394(DAT_09180748,3);
          uVar6 = DAT_09172f10;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          lVar2 = System_Type__GetTypeFromHandle(uVar6,0);
          if (plVar3 == (long *)0x0) goto LAB_07399768;
          if ((lVar2 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_0739976c;
          if ((int)plVar3[3] != 0) {
            plVar3[4] = lVar2;
            thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
            lVar2 = System_Type__GetTypeFromHandle(DAT_09172438,0);
            if ((lVar2 != 0) &&
               (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_0739976c;
            if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
              plVar3[5] = lVar2;
              thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
              lVar2 = System_Type__GetTypeFromHandle(DAT_09171150,0);
              if ((lVar2 != 0) &&
                 (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_0739976c;
              if (2 < *(uint *)(plVar3 + 3)) {
                plVar3[6] = lVar2;
                thunk_FUN_03f5d7b8(plVar3 + 6,lVar2);
                uVar6 = MessagePack_MessagePackSerializer_CompiledMethods__GetMethod
                                  (DAT_09200768,param_2,plVar3);
                if (lVar1 != 0) {
                  puVar13 = (undefined8 *)(lVar1 + 0x10);
                  *puVar13 = uVar6;
                  thunk_FUN_03f5d7b8(puVar13,uVar6);
                  if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar6 = DAT_09172f10;
                  if (**(char **)(DAT_09183e08 + 0xb8) == '\0') {
                    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
                    if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_091843a0);
                    }
                    lVar1 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092235d8,0);
                    uVar6 = System_Type__GetTypeFromHandle(DAT_09172438,0);
                    lVar2 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092206f0,0);
                    uVar6 = System_Type__GetTypeFromHandle(DAT_09171150,0);
                    lVar4 = System_Linq_Expressions_Expression__Parameter(uVar6,DAT_092188a8,0);
                    uVar6 = System_Linq_Expressions_Expression__Call(0,*puVar13,lVar1,lVar2,lVar4,0)
                    ;
                    uVar12 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
                    uVar6 = System_Linq_Expressions_Expression__Convert(uVar6,uVar12,0);
                    plVar3 = (long *)FUN_03f5c394(DAT_09180368,3);
                    if (plVar3 == (long *)0x0) goto LAB_07399768;
                    if ((lVar1 != 0) &&
                       (lVar5 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar5 == 0)) goto LAB_0739976c;
                    if ((int)plVar3[3] == 0) goto LAB_07399764;
                    plVar3[4] = lVar1;
                    thunk_FUN_03f5d7b8(plVar3 + 4,lVar1);
                    if ((lVar2 != 0) &&
                       (lVar1 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar1 == 0)) goto LAB_0739976c;
                    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_07399764;
                    plVar3[5] = lVar2;
                    thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
                    if ((lVar4 != 0) &&
                       (lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar1 == 0)) goto LAB_0739976c;
                    if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
                    plVar3[6] = lVar4;
                    thunk_FUN_03f5d7b8(plVar3 + 6,lVar4);
                    lVar1 = FUN_04b212ac(uVar6,plVar3,DAT_091cbbd8);
                    if (DAT_09520b34 == '\0') {
                      FUN_03f5c2a4(&DAT_09183e08);
                      DAT_09520b34 = '\x01';
                    }
                    if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    if (lVar1 == 0) goto LAB_07399768;
                    uVar6 = FUN_05237a80(lVar1,**(undefined1 **)(DAT_09183e08 + 0xb8),DAT_091a7760);
                    *(undefined8 *)(param_1 + 0x40) = uVar6;
                  }
                  else {
                    uVar6 = thunk_FUN_03f9944c(DAT_09179c10);
                    FUN_053361d4(uVar6,lVar1,DAT_091f3300,0);
                    *(undefined8 *)(param_1 + 0x40) = uVar6;
                  }
                  thunk_FUN_03f5d7b8(param_1 + 0x40,uVar6);
                  lVar1 = thunk_FUN_03f9944c(DAT_091969e8);
                  System_Object___ctor(lVar1,0);
                  plVar3 = (long *)FUN_03f5c394(DAT_09180748,3);
                  uVar6 = DAT_09172f10;
                  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_095354b8);
                  }
                  lVar2 = System_Type__GetTypeFromHandle(uVar6,0);
                  if (plVar3 != (long *)0x0) {
                    if ((lVar2 != 0) &&
                       (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar4 == 0)) goto LAB_0739976c;
                    if ((int)plVar3[3] != 0) {
                      plVar3[4] = lVar2;
                      thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
                      lVar2 = System_Type__GetTypeFromHandle(DAT_09172438,0);
                      if ((lVar2 != 0) &&
                         (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar4 == 0)) goto LAB_0739976c;
                      if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
                        plVar3[5] = lVar2;
                        thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
                        lVar2 = System_Type__GetTypeFromHandle(DAT_09171150,0);
                        if ((lVar2 != 0) &&
                           (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar4 == 0)) goto LAB_0739976c;
                        if (2 < *(uint *)(plVar3 + 3)) {
                          plVar3[6] = lVar2;
                          thunk_FUN_03f5d7b8(plVar3 + 6,lVar2);
                          uVar6 = MessagePack_MessagePackSerializer_CompiledMethods__GetMethod
                                            (DAT_09200780,param_2,plVar3);
                          if (lVar1 != 0) {
                            puVar13 = (undefined8 *)(lVar1 + 0x10);
                            *puVar13 = uVar6;
                            thunk_FUN_03f5d7b8(puVar13,uVar6);
                            if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
                              FUN_03f5c424();
                            }
                            uVar6 = DAT_09172f10;
                            if (**(char **)(DAT_09183e08 + 0xb8) == '\0') {
                              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
                              if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
                                FUN_03f5c424(DAT_091843a0);
                              }
                              lVar1 = System_Linq_Expressions_Expression__Parameter
                                                (uVar6,DAT_092235d8,0);
                              uVar6 = System_Type__GetTypeFromHandle(DAT_09172438,0);
                              lVar2 = System_Linq_Expressions_Expression__Parameter
                                                (uVar6,DAT_092206f0,0);
                              uVar6 = System_Type__GetTypeFromHandle(DAT_09171150,0);
                              lVar4 = System_Linq_Expressions_Expression__Parameter
                                                (uVar6,DAT_092188a8,0);
                              uVar6 = System_Linq_Expressions_Expression__Call
                                                (0,*puVar13,lVar1,lVar2,lVar4,0);
                              uVar12 = System_Type__GetTypeFromHandle(DAT_09170b98,0);
                              uVar6 = System_Linq_Expressions_Expression__Convert(uVar6,uVar12,0);
                              plVar3 = (long *)FUN_03f5c394(DAT_09180368,3);
                              if (plVar3 == (long *)0x0) goto LAB_07399768;
                              if ((lVar1 != 0) &&
                                 (lVar5 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar3 + 0x40)),
                                 lVar5 == 0)) goto LAB_0739976c;
                              if ((int)plVar3[3] == 0) goto LAB_07399764;
                              plVar3[4] = lVar1;
                              thunk_FUN_03f5d7b8(plVar3 + 4,lVar1);
                              if ((lVar2 != 0) &&
                                 (lVar1 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)),
                                 lVar1 == 0)) goto LAB_0739976c;
                              if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_07399764;
                              plVar3[5] = lVar2;
                              thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
                              if ((lVar4 != 0) &&
                                 (lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                                 lVar1 == 0)) goto LAB_0739976c;
                              if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
                              plVar3[6] = lVar4;
                              thunk_FUN_03f5d7b8(plVar3 + 6,lVar4);
                              lVar1 = FUN_04b212ac(uVar6,plVar3,DAT_091cbbd0);
                              if (DAT_09520b34 == '\0') {
                                FUN_03f5c2a4(&DAT_09183e08);
                                DAT_09520b34 = '\x01';
                              }
                              if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              if (lVar1 == 0) goto LAB_07399768;
                              uVar6 = FUN_05237a80(lVar1,**(undefined1 **)(DAT_09183e08 + 0xb8),
                                                   DAT_091a7758);
                              *(undefined8 *)(param_1 + 0x48) = uVar6;
                            }
                            else {
                              uVar6 = thunk_FUN_03f9944c(DAT_09179c08);
                              FUN_053360b4(uVar6,lVar1,DAT_091f3308,0);
                              *(undefined8 *)(param_1 + 0x48) = uVar6;
                            }
                            thunk_FUN_03f5d7b8(param_1 + 0x48,uVar6);
                            lVar1 = thunk_FUN_03f9944c(DAT_091969f0);
                            System_Object___ctor(lVar1,0);
                            plVar3 = (long *)FUN_03f5c394(DAT_09180748,3);
                            uVar6 = DAT_09170ab8;
                            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                              FUN_03f5c424(DAT_095354b8);
                            }
                            lVar2 = System_Type__GetTypeFromHandle(uVar6,0);
                            if (plVar3 != (long *)0x0) {
                              if ((lVar2 != 0) &&
                                 (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)),
                                 lVar4 == 0)) goto LAB_0739976c;
                              if ((int)plVar3[3] != 0) {
                                plVar3[4] = lVar2;
                                thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
                                lVar2 = System_Type__GetTypeFromHandle(DAT_09172438,0);
                                if ((lVar2 != 0) &&
                                   (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)
                                                              ), lVar4 == 0)) goto LAB_0739976c;
                                if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
                                  plVar3[5] = lVar2;
                                  thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
                                  lVar2 = System_Type__GetTypeFromHandle(DAT_09171150,0);
                                  if ((lVar2 != 0) &&
                                     (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)
                                                                        (*plVar3 + 0x40)),
                                     lVar4 == 0)) goto LAB_0739976c;
                                  if (2 < *(uint *)(plVar3 + 3)) {
                                    plVar3[6] = lVar2;
                                    thunk_FUN_03f5d7b8(plVar3 + 6,lVar2);
                                    uVar6 = MessagePack_MessagePackSerializer_CompiledMethods__GetMethod
                                                      (DAT_09200768,param_2,plVar3);
                                    if (lVar1 != 0) {
                                      puVar13 = (undefined8 *)(lVar1 + 0x10);
                                      *puVar13 = uVar6;
                                      thunk_FUN_03f5d7b8(puVar13,uVar6);
                                      if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
                                        FUN_03f5c424();
                                      }
                                      uVar6 = DAT_09170ab8;
                                      if (**(char **)(DAT_09183e08 + 0xb8) == '\0') {
                                        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
                                        if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
                                          FUN_03f5c424(DAT_091843a0);
                                        }
                                        lVar1 = System_Linq_Expressions_Expression__Parameter
                                                          (uVar6,DAT_09218720,0);
                                        uVar6 = System_Type__GetTypeFromHandle(DAT_09172438,0);
                                        lVar2 = System_Linq_Expressions_Expression__Parameter
                                                          (uVar6,DAT_092206f0,0);
                                        uVar6 = System_Type__GetTypeFromHandle(DAT_09171150,0);
                                        lVar4 = System_Linq_Expressions_Expression__Parameter
                                                          (uVar6,DAT_092188a8,0);
                                        uVar6 = System_Linq_Expressions_Expression__Call
                                                          (0,*puVar13,lVar1,lVar2,lVar4,0);
                                        uVar12 = System_Type__GetTypeFromHandle
                                                           (DAT_095353e8 + 0x20,0);
                                        uVar6 = System_Linq_Expressions_Expression__Convert
                                                          (uVar6,uVar12,0);
                                        plVar3 = (long *)FUN_03f5c394(DAT_09180368,3);
                                        if (plVar3 == (long *)0x0) goto LAB_07399768;
                                        if ((lVar1 != 0) &&
                                           (lVar5 = thunk_FUN_03f99350(lVar1,*(undefined8 *)
                                                                              (*plVar3 + 0x40)),
                                           lVar5 == 0)) goto LAB_0739976c;
                                        if ((int)plVar3[3] == 0) goto LAB_07399764;
                                        plVar3[4] = lVar1;
                                        thunk_FUN_03f5d7b8(plVar3 + 4,lVar1);
                                        if ((lVar2 != 0) &&
                                           (lVar1 = thunk_FUN_03f99350(lVar2,*(undefined8 *)
                                                                              (*plVar3 + 0x40)),
                                           lVar1 == 0)) goto LAB_0739976c;
                                        if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0)
                                        goto LAB_07399764;
                                        plVar3[5] = lVar2;
                                        thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
                                        if ((lVar4 != 0) &&
                                           (lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)
                                                                              (*plVar3 + 0x40)),
                                           lVar1 == 0)) goto LAB_0739976c;
                                        if (*(uint *)(plVar3 + 3) < 3) goto LAB_07399764;
                                        plVar3[6] = lVar4;
                                        thunk_FUN_03f5d7b8(plVar3 + 6,lVar4);
                                        lVar1 = FUN_04b212ac(uVar6,plVar3,DAT_091cbbb8);
                                        if (DAT_09520b34 == '\0') {
                                          FUN_03f5c2a4(&DAT_09183e08);
                                          DAT_09520b34 = '\x01';
                                        }
                                        if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        if (lVar1 == 0) goto LAB_07399768;
                                        uVar6 = FUN_05237a80(lVar1,**(undefined1 **)
                                                                     (DAT_09183e08 + 0xb8),
                                                             DAT_091a7740);
                                        *(undefined8 *)(param_1 + 0x50) = uVar6;
                                      }
                                      else {
                                        uVar6 = thunk_FUN_03f9944c(DAT_09179bc8);
                                        FUN_05335c30(uVar6,lVar1,DAT_091f3310,0);
                                        *(undefined8 *)(param_1 + 0x50) = uVar6;
                                      }
                                      thunk_FUN_03f5d7b8(param_1 + 0x50,uVar6);
                                      lVar1 = thunk_FUN_03f9944c(DAT_091969f8);
                                      System_Object___ctor(lVar1,0);
                                      plVar3 = (long *)FUN_03f5c394(DAT_09180748,3);
                                      uVar6 = DAT_09170ac0;
                                      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                                        FUN_03f5c424(DAT_095354b8);
                                      }
                                      plVar11 = (long *)System_Type__GetTypeFromHandle(uVar6,0);
                                      if ((plVar11 != (long *)0x0) &&
                                         (lVar2 = (**(code **)(*plVar11 + 0x938))
                                                            (plVar11,*(undefined8 *)
                                                                      (*plVar11 + 0x940)),
                                         plVar3 != (long *)0x0)) {
                                        if ((lVar2 != 0) &&
                                           (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)
                                                                              (*plVar3 + 0x40)),
                                           lVar4 == 0)) goto LAB_0739976c;
                                        if ((int)plVar3[3] != 0) {
                                          plVar3[4] = lVar2;
                                          thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
                                          lVar2 = System_Type__GetTypeFromHandle(DAT_09172438,0);
                                          if ((lVar2 != 0) &&
                                             (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)
                                                                                (*plVar3 + 0x40)),
                                             lVar4 == 0)) goto LAB_0739976c;
                                          if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
                                            plVar3[5] = lVar2;
                                            thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
                                            lVar2 = System_Type__GetTypeFromHandle(DAT_09171150,0);
                                            if ((lVar2 != 0) &&
                                               (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)
                                                                                  (*plVar3 + 0x40)),
                                               lVar4 == 0)) goto LAB_0739976c;
                                            if (2 < *(uint *)(plVar3 + 3)) {
                                              plVar3[6] = lVar2;
                                              thunk_FUN_03f5d7b8(plVar3 + 6,lVar2);
                                              uVar6 = 
                                                  MessagePack_MessagePackSerializer_CompiledMethods__GetMethod
                                                            (DAT_09200768,param_2,plVar3);
                                              if (lVar1 != 0) {
                                                puVar13 = (undefined8 *)(lVar1 + 0x10);
                                                *puVar13 = uVar6;
                                                thunk_FUN_03f5d7b8(puVar13,uVar6);
                                                if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
                                                  FUN_03f5c424();
                                                }
                                                uVar6 = DAT_09170ac0;
                                                if (**(char **)(DAT_09183e08 + 0xb8) != '\0') {
                                                  uVar6 = thunk_FUN_03f9944c(DAT_09179bd0);
                                                  FUN_05335ce4(uVar6,lVar1,DAT_091f3318,0);
                                                  *(undefined8 *)(param_1 + 0x58) = uVar6;
LAB_07399744:
                                                  thunk_FUN_03f5d7b8(param_1 + 0x58,uVar6);
                                                  return;
                                                }
                                                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                                                  FUN_03f5c424();
                                                }
                                                uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
                                                if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
                                                  FUN_03f5c424(DAT_091843a0);
                                                }
                                                lVar1 = 
                                                  System_Linq_Expressions_Expression__Parameter
                                                            (uVar6,DAT_09218720,0);
                                                uVar6 = System_Type__GetTypeFromHandle
                                                                  (DAT_09172438,0);
                                                lVar2 = 
                                                  System_Linq_Expressions_Expression__Parameter
                                                            (uVar6,DAT_092206f0,0);
                                                uVar6 = System_Type__GetTypeFromHandle
                                                                  (DAT_09171150,0);
                                                lVar4 = 
                                                  System_Linq_Expressions_Expression__Parameter
                                                            (uVar6,DAT_092188a8,0);
                                                uVar6 = System_Linq_Expressions_Expression__Call
                                                                  (0,*puVar13,lVar1,lVar2,lVar4,0);
                                                uVar12 = System_Type__GetTypeFromHandle
                                                                   (DAT_095353e8 + 0x20,0);
                                                uVar6 = System_Linq_Expressions_Expression__Convert
                                                                  (uVar6,uVar12,0);
                                                plVar3 = (long *)FUN_03f5c394(DAT_09180368,3);
                                                if (plVar3 != (long *)0x0) {
                                                  if ((lVar1 != 0) &&
                                                     (lVar5 = thunk_FUN_03f99350(lVar1,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40)), lVar5 == 0)) goto LAB_0739976c;
                                                  if ((int)plVar3[3] != 0) {
                                                    plVar3[4] = lVar1;
                                                    thunk_FUN_03f5d7b8(plVar3 + 4,lVar1);
                                                    if ((lVar2 != 0) &&
                                                       (lVar1 = thunk_FUN_03f99350(lVar2,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
                                                  goto LAB_0739976c;
                                                  if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
                                                    plVar3[5] = lVar2;
                                                    thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
                                                    if ((lVar4 != 0) &&
                                                       (lVar1 = thunk_FUN_03f99350(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
                                                  goto LAB_0739976c;
                                                  if (2 < *(uint *)(plVar3 + 3)) {
                                                    plVar3[6] = lVar4;
                                                    thunk_FUN_03f5d7b8(plVar3 + 6,lVar4);
                                                    lVar1 = FUN_04b212ac(uVar6,plVar3,DAT_091cbbc0);
                                                    if (DAT_09520b34 == '\0') {
                                                      FUN_03f5c2a4(&DAT_09183e08);
                                                      DAT_09520b34 = '\x01';
                                                    }
                                                    if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
                                                      FUN_03f5c424();
                                                    }
                                                    if (lVar1 != 0) {
                                                      uVar6 = FUN_05237a80(lVar1,**(undefined1 **)
                                                                                   (DAT_09183e08 +
                                                                                   0xb8),
                                                                           DAT_091a7748);
                                                      *(undefined8 *)(param_1 + 0x58) = uVar6;
                                                      goto LAB_07399744;
                                                    }
                                                    goto LAB_07399768;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_07399764;
                                                }
                                              }
                                              goto LAB_07399768;
                                            }
                                          }
                                        }
                                        goto LAB_07399764;
                                      }
                                    }
                                    goto LAB_07399768;
                                  }
                                }
                              }
                              goto LAB_07399764;
                            }
                          }
                          goto LAB_07399768;
                        }
                      }
                    }
                    goto LAB_07399764;
                  }
                }
                goto LAB_07399768;
              }
            }
          }
        }
      }
LAB_07399764:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_07399768:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

