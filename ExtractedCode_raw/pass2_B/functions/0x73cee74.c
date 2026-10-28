// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder.EmitInfo$$.cctor
// address: 0x73cee74
// body: available
// range: 0x73cee74-0x73cfb43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cfb18 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cfb1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cfb28 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cfb30 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cfb38 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cfb40 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder_EmitInfo___cctor(void)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 local_74 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  
  if ((DAT_09520cb9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf5e8);
    FUN_03f5c2a4(&DAT_091c0288);
    FUN_03f5c2a4(&DAT_09171018);
    FUN_03f5c2a4(&DAT_09181cd0);
    FUN_03f5c2a4(&DAT_091c6dd8);
    FUN_03f5c2a4(&DAT_09190408);
    FUN_03f5c2a4(&DAT_0917fee8);
    FUN_03f5c2a4(&DAT_091cbf40);
    FUN_03f5c2a4(&DAT_091cbf48);
    FUN_03f5c2a4(&DAT_091cbf58);
    FUN_03f5c2a4(&DAT_091cbf60);
    FUN_03f5c2a4(&DAT_091cbf50);
    FUN_03f5c2a4(&DAT_091cbb88);
    FUN_03f5c2a4(&DAT_091cbb78);
    FUN_03f5c2a4(&DAT_091cbb80);
    FUN_03f5c2a4(&DAT_091cbba8);
    FUN_03f5c2a4(&DAT_091cbbb0);
    FUN_03f5c2a4(&DAT_091843a0);
    FUN_03f5c2a4(&DAT_091d10f8);
    FUN_03f5c2a4(&DAT_09172398);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_09170c10);
    FUN_03f5c2a4(&DAT_09180368);
    FUN_03f5c2a4(&DAT_09172b40);
    FUN_03f5c2a4(&DAT_0918a408);
    FUN_03f5c2a4(&DAT_091dc0d8);
    FUN_03f5c2a4(&DAT_091dc110);
    FUN_03f5c2a4(&DAT_091dc140);
    FUN_03f5c2a4(&DAT_09223b08);
    DAT_09520cb9 = 1;
  }
  plVar1 = (long *)System_Reflection_MethodBase__GetMethodFromHandle(DAT_091dc140,0);
  plVar2 = (long *)FUN_03f5c394(DAT_0917fee8,1);
  local_68 = 0;
  uVar3 = FUN_03f5c42c(DAT_0918a408,&local_68);
  uVar4 = DAT_09172b40;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
  if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091843a0);
  }
  lVar5 = System_Linq_Expressions_Expression__Constant(uVar3,uVar4,0);
  if (plVar2 == (long *)0x0) goto LAB_073cfb1c;
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0))
  goto LAB_073cfb20;
  if ((int)plVar2[3] == 0) goto LAB_073cfb18;
  plVar2[4] = lVar5;
  thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
        DAT_09188228)) goto LAB_073cfb2c;
  }
  uVar4 = System_Linq_Expressions_Expression__Call(0,plVar1,plVar2,0);
  lVar5 = DAT_091c0288;
  lVar6 = *(long *)(DAT_091c0288 + 0x38);
  if (lVar6 == 0) {
    FUN_03f95ac8(DAT_091c0288);
    lVar6 = *(long *)(lVar5 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  uVar4 = FUN_04b212ac(uVar4,**(undefined8 **)(lVar5 + 0xb8),DAT_091cbb88);
  uVar4 = FUN_04b24e44(uVar4,DAT_091cbf50);
  **(undefined8 **)(DAT_09190408 + 0xb8) = uVar4;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09190408 + 0xb8),uVar4);
  uVar4 = System_Type__GetTypeFromHandle(DAT_095354b8 + 0x20,0);
  lVar5 = System_Linq_Expressions_Expression__Parameter(uVar4,DAT_09223b08,0);
  plVar1 = (long *)System_Reflection_MethodBase__GetMethodFromHandle(DAT_091d10f8,0);
  plVar2 = (long *)FUN_03f5c394(DAT_0917fee8,1);
  if (plVar2 == (long *)0x0) goto LAB_073cfb1c;
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0))
  goto LAB_073cfb20;
  if ((int)plVar2[3] == 0) goto LAB_073cfb18;
  plVar2[4] = lVar5;
  thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
        DAT_09188228)) goto LAB_073cfb34;
  }
  uVar4 = System_Linq_Expressions_Expression__Call(0,plVar1,plVar2,0);
  plVar1 = (long *)System_Reflection_MethodBase__GetMethodFromHandle(DAT_091dc110,0);
  plVar2 = (long *)FUN_03f5c394(DAT_0917fee8,2);
  uVar3 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
  lVar6 = System_Linq_Expressions_Expression__Constant(0,uVar3,0);
  if (plVar2 == (long *)0x0) goto LAB_073cfb1c;
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
  goto LAB_073cfb20;
  if ((int)plVar2[3] == 0) goto LAB_073cfb18;
  plVar2[4] = lVar6;
  thunk_FUN_03f5d7b8(plVar2 + 4,lVar6);
  local_6c = 0;
  uVar3 = FUN_03f5c42c(DAT_09181cd0,&local_6c);
  uVar8 = System_Type__GetTypeFromHandle(DAT_09171018,0);
  lVar6 = System_Linq_Expressions_Expression__Constant(uVar3,uVar8,0);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
  goto LAB_073cfb20;
  if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_073cfb18;
  plVar2[5] = lVar6;
  thunk_FUN_03f5d7b8(plVar2 + 5,lVar6);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
        DAT_09188228)) goto LAB_073cfb3c;
  }
  uVar4 = System_Linq_Expressions_Expression__Call(uVar4,plVar1,plVar2,0);
  plVar1 = (long *)FUN_03f5c394(DAT_09180368,1);
  if (plVar1 == (long *)0x0) {
LAB_073cfb1c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar6 == 0))
  goto LAB_073cfb20;
  if ((int)plVar1[3] == 0) goto LAB_073cfb18;
  plVar1[4] = lVar5;
  thunk_FUN_03f5d7b8(plVar1 + 4,lVar5);
  uVar4 = FUN_04b212ac(uVar4,plVar1,DAT_091cbbb0);
  uVar4 = FUN_04b24e5c(uVar4,DAT_091cbf60);
  puVar9 = (undefined8 *)(*(long *)(DAT_09190408 + 0xb8) + 8);
  *puVar9 = uVar4;
  thunk_FUN_03f5d7b8(puVar9,uVar4);
  uVar4 = System_Type__GetTypeFromHandle(DAT_095354b8 + 0x20,0);
  lVar5 = System_Linq_Expressions_Expression__Parameter(uVar4,DAT_09223b08,0);
  plVar1 = (long *)System_Reflection_MethodBase__GetMethodFromHandle(DAT_091d10f8,0);
  plVar2 = (long *)FUN_03f5c394(DAT_0917fee8,1);
  if (plVar2 == (long *)0x0) goto LAB_073cfb1c;
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0))
  goto LAB_073cfb20;
  if ((int)plVar2[3] == 0) goto LAB_073cfb18;
  plVar2[4] = lVar5;
  thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
        DAT_09188228)) {
LAB_073cfb34:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar1);
    }
  }
  uVar4 = System_Linq_Expressions_Expression__Call(0,plVar1,plVar2,0);
  plVar1 = (long *)System_Reflection_MethodBase__GetMethodFromHandle(DAT_091dc0d8,0);
  plVar2 = (long *)FUN_03f5c394(DAT_0917fee8,2);
  uVar3 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
  lVar6 = System_Linq_Expressions_Expression__Constant(0,uVar3,0);
  if (plVar2 == (long *)0x0) goto LAB_073cfb1c;
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
  goto LAB_073cfb20;
  if ((int)plVar2[3] == 0) goto LAB_073cfb18;
  plVar2[4] = lVar6;
  thunk_FUN_03f5d7b8(plVar2 + 4,lVar6);
  local_70 = 0;
  uVar3 = FUN_03f5c42c(DAT_09181cd0,&local_70);
  uVar8 = System_Type__GetTypeFromHandle(DAT_09171018,0);
  lVar6 = System_Linq_Expressions_Expression__Constant(uVar3,uVar8,0);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
  goto LAB_073cfb20;
  if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_073cfb18;
  plVar2[5] = lVar6;
  thunk_FUN_03f5d7b8(plVar2 + 5,lVar6);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
        DAT_09188228)) {
LAB_073cfb3c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar1);
    }
  }
  uVar4 = System_Linq_Expressions_Expression__Call(uVar4,plVar1,plVar2,0);
  plVar1 = (long *)FUN_03f5c394(DAT_09180368,1);
  if (plVar1 == (long *)0x0) goto LAB_073cfb1c;
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar6 == 0))
  goto LAB_073cfb20;
  if ((int)plVar1[3] == 0) goto LAB_073cfb18;
  plVar1[4] = lVar5;
  thunk_FUN_03f5d7b8(plVar1 + 4,lVar5);
  uVar4 = FUN_04b212ac(uVar4,plVar1,DAT_091cbba8);
  uVar4 = FUN_04b24e5c(uVar4,DAT_091cbf58);
  puVar9 = (undefined8 *)(*(long *)(DAT_09190408 + 0xb8) + 0x10);
  *puVar9 = uVar4;
  thunk_FUN_03f5d7b8(puVar9,uVar4);
  plVar1 = (long *)System_Reflection_MethodBase__GetMethodFromHandle(DAT_091c6dd8,0);
  plVar2 = (long *)FUN_03f5c394(DAT_0917fee8,2);
  uVar4 = System_Type__GetTypeFromHandle(DAT_09172398,0);
  lVar5 = System_Linq_Expressions_Expression__Constant(0,uVar4,0);
  if (plVar2 == (long *)0x0) goto LAB_073cfb1c;
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0))
  goto LAB_073cfb20;
  if ((int)plVar2[3] == 0) goto LAB_073cfb18;
  plVar2[4] = lVar5;
  thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
  local_74[0] = 0;
  uVar4 = FUN_03f5c42c(DAT_09535400,local_74);
  uVar3 = System_Type__GetTypeFromHandle(DAT_09535400 + 0x20,0);
  lVar5 = System_Linq_Expressions_Expression__Constant(uVar4,uVar3,0);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0))
  goto LAB_073cfb20;
  if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_073cfb18;
  plVar2[5] = lVar5;
  thunk_FUN_03f5d7b8(plVar2 + 5,lVar5);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
        DAT_09188228)) goto LAB_073cfb2c;
  }
  uVar4 = System_Linq_Expressions_Expression__Call(0,plVar1,plVar2,0);
  lVar5 = DAT_091c0288;
  lVar6 = *(long *)(DAT_091c0288 + 0x38);
  if (lVar6 == 0) {
    FUN_03f95ac8(DAT_091c0288);
    lVar6 = *(long *)(lVar5 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  uVar4 = FUN_04b212ac(uVar4,**(undefined8 **)(lVar5 + 0xb8),DAT_091cbb78);
  uVar4 = FUN_04b24e44(uVar4,DAT_091cbf40);
  puVar9 = (undefined8 *)(*(long *)(DAT_09190408 + 0xb8) + 0x18);
  *puVar9 = uVar4;
  thunk_FUN_03f5d7b8(puVar9,uVar4);
  plVar1 = (long *)System_Reflection_MethodBase__GetMethodFromHandle(DAT_091bf5e8,0);
  plVar2 = (long *)FUN_03f5c394(DAT_0917fee8,2);
  uVar4 = System_Type__GetTypeFromHandle(DAT_095354b8 + 0x20,0);
  lVar5 = System_Linq_Expressions_Expression__Constant(0,uVar4,0);
  if (plVar2 == (long *)0x0) goto LAB_073cfb1c;
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
LAB_073cfb20:
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar5;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09170c10,0);
    lVar5 = System_Linq_Expressions_Expression__Constant(0,uVar4,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0))
    goto LAB_073cfb20;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar5;
      thunk_FUN_03f5d7b8(plVar2 + 5,lVar5);
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
            DAT_09188228)) {
LAB_073cfb2c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar1);
        }
      }
      uVar4 = System_Linq_Expressions_Expression__Call(0,plVar1,plVar2,0);
      lVar5 = DAT_091c0288;
      lVar6 = *(long *)(DAT_091c0288 + 0x38);
      if (lVar6 == 0) {
        FUN_03f95ac8(DAT_091c0288);
        lVar6 = *(long *)(lVar5 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      uVar4 = FUN_04b212ac(uVar4,**(undefined8 **)(lVar5 + 0xb8),DAT_091cbb80);
      uVar4 = FUN_04b24e44(uVar4,DAT_091cbf48);
      puVar9 = (undefined8 *)(*(long *)(DAT_09190408 + 0xb8) + 0x20);
      *puVar9 = uVar4;
      thunk_FUN_03f5d7b8(puVar9,uVar4);
      return;
    }
  }
LAB_073cfb18:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

