// rea decompile_all
// name: CookingGraph.CompositeStructureTranslator$$Translate
// address: 0x441ec28
// body: available
// range: 0x441ec28-0x441f31f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441f2b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441f318 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441f31c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CompositeStructureTranslator__Translate(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 local_68;
  undefined4 local_64;
  
  if ((DAT_09517f32 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_091ca960);
    FUN_03f5c2a4(&DAT_091cb1e8);
    FUN_03f5c2a4(&DAT_09178ad8);
    FUN_03f5c2a4(&DAT_091a86a8);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_091aecb0);
    FUN_03f5c2a4(&DAT_091aecc8);
    FUN_03f5c2a4(&DAT_091abc08);
    FUN_03f5c2a4(&DAT_091aecd0);
    FUN_03f5c2a4(&DAT_091abc10);
    FUN_03f5c2a4(&DAT_0917c840);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091da200);
    FUN_03f5c2a4(&DAT_091e6788);
    FUN_03f5c2a4(&DAT_0918ecc0);
    FUN_03f5c2a4(&DAT_091f7da8);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_092196e8);
    FUN_03f5c2a4(&DAT_091ff1d8);
    FUN_03f5c2a4(&DAT_091f6570);
    FUN_03f5c2a4(&DAT_092147f0);
    DAT_09517f32 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918ecc0);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) goto LAB_0441f2b0;
  plVar10 = (long *)(lVar2 + 0x10);
  *plVar10 = param_1;
  thunk_FUN_03f5d7b8(plVar10,param_1);
  lVar9 = *plVar10;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(lVar9,0,0);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    puVar4 = &DAT_0921c7b8;
LAB_0441f2f0:
    uVar6 = thunk_FUN_03fc39d4(puVar4);
    System_ArgumentNullException___ctor(uVar5,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091c5ab8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    puVar4 = (undefined8 *)&DAT_09219aa0;
    goto LAB_0441f2f0;
  }
  lVar9 = *param_2;
  uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_0917b378) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0441ee4c;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b378,0);
LAB_0441ee4c:
  iVar1 = (*(code *)*puVar4)(param_2,puVar4[1]);
  if (iVar1 == 0) {
    return 0;
  }
  uVar5 = CookingGraph_CompositeStructureTranslator__ResolveIngredients
                    (*(undefined8 *)(lVar2 + 0x10),param_2);
  uVar6 = thunk_FUN_03f9944c(DAT_09178ad8);
  FUN_05324070(uVar6,lVar2,DAT_091e6788,0);
  uVar5 = FUN_04afac50(uVar5,uVar6,DAT_091ca960);
  uVar5 = FUN_04b08b78(uVar5,DAT_091cb1e8);
  lVar2 = thunk_FUN_03f9944c(DAT_0917c840);
  FUN_057e0478(lVar2,2,DAT_091aecb0);
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09516ea3 == '\0') {
    FUN_03f5c2a4(&DAT_0918b378);
    DAT_09516ea3 = '\x01';
  }
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x10);
  uVar6 = thunk_FUN_03f9944c(DAT_09179ee0);
  FUN_053eb574(uVar6,uVar11,DAT_091a86a8);
  if (*plVar10 == 0) goto LAB_0441f2b0;
  lVar9 = *(long *)(*plVar10 + 0x30);
  if (lVar9 == 0) {
    return 0;
  }
  lVar9 = *(long *)(lVar9 + 0x18);
  if (lVar9 == 0) {
    return 0;
  }
  if (*(int *)(lVar9 + 0x18) < 1) {
    if (lVar2 == 0) goto LAB_0441f2b0;
  }
  else {
    if (lVar2 == 0) goto LAB_0441f2b0;
    iVar1 = 0;
    do {
      if (1 < *(int *)(lVar2 + 0x18)) goto LAB_0441f044;
      lVar7 = FUN_057e0998(lVar9,iVar1,DAT_091abc10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Equality(lVar7,0,0);
      if ((uVar3 & 1) == 0) {
        if (lVar7 == 0) goto LAB_0441f2b0;
        if (*(char *)(lVar7 + 0x38) != '\0') {
          CookingGraph_CompositeStructureTranslator__FindMatches
                    (*plVar10,lVar7,iVar1,uVar5,lVar2,uVar6,2);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(lVar9 + 0x18));
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0x18) < 2) goto LAB_0441f294;
LAB_0441f044:
  lVar9 = FUN_057e0998(lVar2,0,DAT_091aecd0);
  if (lVar9 == 0) goto LAB_0441f2b0;
  plVar10 = *(long **)(lVar9 + 0x20);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else if (*plVar10 != DAT_091828a0) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(plVar10,0,0);
  if ((uVar3 & 1) == 0) {
    if (plVar10 == (long *)0x0) goto LAB_0441f2b0;
    uVar3 = System_String__IsNullOrEmpty(plVar10[3],0);
    if ((uVar3 & 1) != 0) goto LAB_0441f0e4;
    lVar7 = plVar10[3];
    lVar9 = FUN_057e0998(lVar2,0,DAT_091aecd0);
    if (lVar9 == 0) goto LAB_0441f2b0;
    local_64 = *(undefined4 *)(lVar9 + 0x18);
    uVar5 = FUN_03f5c42c(DAT_09535420,&local_64);
    uVar5 = System_String__Format(DAT_091f7da8,lVar7,uVar5,0);
  }
  else {
LAB_0441f0e4:
    lVar9 = FUN_057e0998(lVar2,0,DAT_091aecd0);
    if (lVar9 == 0) goto LAB_0441f2b0;
    local_68 = *(undefined4 *)(lVar9 + 0x18);
    uVar5 = FUN_03f5c42c(DAT_09535420,&local_68);
    uVar5 = System_String__Format(DAT_092196e8,uVar5,0);
  }
  lVar9 = FUN_03f5c394(DAT_091805f8,5);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined8 *)(lVar9 + 0x20) = DAT_091ff1d8;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x20));
      uVar6 = FUN_04d648f8(DAT_091f86e8,param_2,DAT_091da200);
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar9 + 0x28) = uVar6;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x28),uVar6);
        if (2 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x30) = DAT_092147f0;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x30));
          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar9 + 0x38) = uVar5;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x38),uVar5);
            if (4 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x40) = DAT_091f6570;
              thunk_FUN_03f5d7b8();
              uVar5 = System_String__Concat(lVar9,0);
              CookingGraph_CompositeStructureTranslator__Warn(param_3,uVar5);
LAB_0441f294:
              uVar5 = FUN_057e0998(lVar2,0,DAT_091aecd0);
              return uVar5;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0441f2b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

