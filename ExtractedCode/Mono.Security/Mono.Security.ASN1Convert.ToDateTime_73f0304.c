// rea decompile_all
// name: Mono.Security.ASN1Convert$$ToDateTime
// address: 0x73f0304
// body: available
// range: 0x73f0304-0x73f08bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f0864 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f0868 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f08b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f08bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_ASN1Convert__ToDateTime(long param_1)

{
  int iVar1;
  short sVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined2 uVar9;
  long lVar10;
  undefined2 local_4c [2];
  undefined2 local_48 [2];
  undefined2 local_44 [2];
  undefined2 local_38 [2];
  undefined2 local_34 [2];
  
  if ((DAT_09520e11 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091f9d70);
    FUN_03f5c2a4(&DAT_09225e18);
    FUN_03f5c2a4(&DAT_092268f8);
    FUN_03f5c2a4(&DAT_09225e10);
    FUN_03f5c2a4(&DAT_091f9bc8);
    FUN_03f5c2a4(&DAT_09225d18);
    DAT_09520e11 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09223ea0);
    System_ArgumentNullException___ctor(uVar4,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091bf508);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar6);
  }
  plVar3 = (long *)System_Text_Encoding__get_ASCII(0);
  uVar4 = Mono_Security_ASN1__get_Value(param_1);
  if (plVar3 == (long *)0x0) {
LAB_073f0864:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = (**(code **)(*plVar3 + 0x368))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x370));
  if (lVar5 == 0) goto LAB_073f0864;
  iVar1 = *(int *)(lVar5 + 0x10);
  uVar4 = 0;
  if (iVar1 < 0xf) {
    if (iVar1 == 0xb) {
      puVar8 = &DAT_09225d18;
LAB_073f07f8:
      uVar4 = *puVar8;
      goto LAB_073f07fc;
    }
    if (iVar1 != 0xd) goto LAB_073f07fc;
    uVar4 = System_String__Substring(lVar5,0,2,0);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ff8);
    }
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    sVar2 = System_Convert__ToInt16(uVar4,uVar6,0);
    puVar8 = &DAT_091f9d70;
    if (0x31 < sVar2) {
      puVar8 = &DAT_091f9bc8;
    }
    lVar5 = System_String__Concat(*puVar8,lVar5,0);
    puVar8 = &DAT_09225e10;
  }
  else {
    if (iVar1 == 0xf) {
      puVar8 = &DAT_09225e10;
      goto LAB_073f07f8;
    }
    if (iVar1 != 0x11) goto LAB_073f07fc;
    uVar4 = System_String__Substring(lVar5,0,2,0);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ff8);
    }
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    sVar2 = System_Convert__ToInt16(uVar4,uVar6,0);
    plVar3 = &DAT_091f9bc8;
    if (sVar2 < 0x32) {
      plVar3 = &DAT_091f9d70;
    }
    lVar10 = *plVar3;
    sVar2 = System_String__get_Chars(lVar5,0xc,0);
    uVar9 = 0x2d;
    if (sVar2 != 0x2b) {
      uVar9 = 0x2b;
    }
    plVar3 = (long *)FUN_03f5c394(DAT_09180318,7);
    if (plVar3 == (long *)0x0) goto LAB_073f0864;
    if ((lVar10 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0)) {
LAB_073f08b4:
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
    if ((int)plVar3[3] == 0) {
LAB_073f0868:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar3[4] = lVar10;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar10);
    lVar10 = System_String__Substring(lVar5,0,0xc,0);
    if ((lVar10 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0))
    goto LAB_073f08b4;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_073f0868;
    plVar3[5] = lVar10;
    thunk_FUN_03f5d7b8(plVar3 + 5,lVar10);
    local_34[0] = uVar9;
    lVar10 = FUN_03f5c42c(DAT_09535460,local_34);
    if ((lVar10 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0))
    goto LAB_073f08b4;
    if (*(uint *)(plVar3 + 3) < 3) goto LAB_073f0868;
    plVar3[6] = lVar10;
    thunk_FUN_03f5d7b8(plVar3 + 6,lVar10);
    local_38[0] = System_String__get_Chars(lVar5,0xd,0);
    lVar10 = FUN_03f5c42c(DAT_09535460,local_38);
    if ((lVar10 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0))
    goto LAB_073f08b4;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_073f0868;
    plVar3[7] = lVar10;
    thunk_FUN_03f5d7b8(plVar3 + 7,lVar10);
    local_44[0] = System_String__get_Chars(lVar5,0xe,0);
    lVar10 = FUN_03f5c42c(DAT_09535460,local_44);
    if ((lVar10 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0))
    goto LAB_073f08b4;
    if (*(uint *)(plVar3 + 3) < 5) goto LAB_073f0868;
    plVar3[8] = lVar10;
    thunk_FUN_03f5d7b8(plVar3 + 8,lVar10);
    local_48[0] = System_String__get_Chars(lVar5,0xf,0);
    lVar10 = FUN_03f5c42c(DAT_09535460,local_48);
    if ((lVar10 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0))
    goto LAB_073f08b4;
    if (*(uint *)(plVar3 + 3) < 6) goto LAB_073f0868;
    plVar3[9] = lVar10;
    thunk_FUN_03f5d7b8(plVar3 + 9,lVar10);
    local_4c[0] = System_String__get_Chars(lVar5,0x10,0);
    lVar5 = FUN_03f5c42c(DAT_09535460,local_4c);
    if ((lVar5 != 0) &&
       (lVar10 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar10 == 0))
    goto LAB_073f08b4;
    if (*(uint *)(plVar3 + 3) < 7) goto LAB_073f0868;
    plVar3[10] = lVar5;
    thunk_FUN_03f5d7b8(plVar3 + 10,lVar5);
    lVar5 = System_String__Format(DAT_092268f8,plVar3,0);
    puVar8 = &DAT_09225e18;
  }
  uVar4 = *puVar8;
LAB_073f07fc:
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183548);
  }
  System_DateTime__ParseExact(lVar5,uVar4,uVar6,0x10,0);
  return;
}

