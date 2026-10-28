// rea decompile_all
// name: Mono.Security.X509.X501$$AppendEntry
// address: 0x73f949c
// body: available
// range: 0x73f949c-0x73f9c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f9c64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f9c68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_X501__AppendEntry(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  
  if ((DAT_09520e3c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f3b10);
    FUN_03f5c2a4(&DAT_0918d0e0);
    FUN_03f5c2a4(&DAT_091ffbc8);
    FUN_03f5c2a4(&DAT_091facc8);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_0920e2c8);
    FUN_03f5c2a4(&DAT_0920c2a0);
    FUN_03f5c2a4(&DAT_092067a0);
    FUN_03f5c2a4(&DAT_091fd238);
    FUN_03f5c2a4(&DAT_092092b8);
    FUN_03f5c2a4(&DAT_092093b0);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_091fd0a0);
    FUN_03f5c2a4(&DAT_0920c1e0);
    FUN_03f5c2a4(&DAT_0921a908);
    FUN_03f5c2a4(&DAT_09209340);
    FUN_03f5c2a4(&DAT_0920c5c8);
    FUN_03f5c2a4(&DAT_091f6d50);
    FUN_03f5c2a4(&DAT_0920c470);
    FUN_03f5c2a4(&DAT_092041d0);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_09202fd8);
    FUN_03f5c2a4(&DAT_092114b8);
    FUN_03f5c2a4(&DAT_09200f10);
    DAT_09520e3c = 1;
  }
  if (param_2 == 0) {
LAB_073f9c64:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar8 = 0;
  do {
    plVar2 = *(long **)(param_2 + 0x20);
    iVar1 = 0;
    if (plVar2 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
    }
    if (iVar1 <= iVar8) {
      return;
    }
    lVar3 = Mono_Security_ASN1__get_Item(param_2,iVar8);
    if (lVar3 == 0) goto LAB_073f9c64;
    lVar4 = Mono_Security_ASN1__get_Item(lVar3,1);
    if ((lVar4 != 0) && (lVar3 = Mono_Security_ASN1__get_Item(lVar3,0), lVar3 != 0)) {
      if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = Mono_Security_ASN1__CompareArray
                        (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                         **(undefined8 **)(DAT_0918d0e0 + 0xb8));
      if ((uVar5 & 1) == 0) {
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 8));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_092092b8;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x10));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_092093b0;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x18));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_091fd238;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x20));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_092067a0;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x28));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_0920c1e0;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x30));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_0920c5c8;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x40));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_091ffbc8;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x48));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_092114b8;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x50));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_09200f10;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x58));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_0921a908;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x60));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_0920e2c8;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x68));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_0920c470;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x70));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_09202fd8;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x78));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_092041d0;
          goto joined_r0x073f98ec;
        }
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Mono_Security_ASN1__CompareArray
                          (DAT_0918d0e0,*(undefined8 *)(lVar3 + 0x18),
                           *(undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x38));
        if ((uVar5 & 1) != 0) {
          puVar7 = &DAT_0920c2a0;
          goto joined_r0x073f98ec;
        }
        if (param_1 == 0) goto LAB_073f9c64;
        System_Text_StringBuilder__Append(param_1,DAT_09209340,0);
        uVar6 = Mono_Security_ASN1Convert__ToOid(lVar3);
        System_Text_StringBuilder__Append(param_1,uVar6,0);
        puVar7 = &DAT_091facc8;
      }
      else {
        puVar7 = &DAT_091fd0a0;
joined_r0x073f98ec:
        if (param_1 == 0) goto LAB_073f9c64;
      }
      System_Text_StringBuilder__Append(param_1,*puVar7,0);
      if (*(char *)(lVar4 + 0x10) == '\x14') {
        plVar2 = (long *)System_Text_Encoding__get_UTF7(0);
LAB_073f9afc:
        uVar6 = Mono_Security_ASN1__get_Value(lVar4);
        if (plVar2 == (long *)0x0) goto LAB_073f9c64;
        lVar3 = (**(code **)(*plVar2 + 0x368))(plVar2,uVar6,*(undefined8 *)(*plVar2 + 0x370));
      }
      else {
        if (*(char *)(lVar4 + 0x10) != '\x1e') {
          plVar2 = (long *)System_Text_Encoding__get_UTF8(0);
          goto LAB_073f9afc;
        }
        plVar2 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
        System_Text_StringBuilder___ctor(plVar2,0);
        lVar3 = Mono_Security_ASN1__get_Value(lVar4);
        if (lVar3 == 0) goto LAB_073f9c64;
        uVar9 = 1;
        while ((int)uVar9 < *(int *)(lVar3 + 0x18)) {
          lVar3 = Mono_Security_ASN1__get_Value(lVar4);
          if (lVar3 == 0) goto LAB_073f9c64;
          if (*(uint *)(lVar3 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (plVar2 == (long *)0x0) goto LAB_073f9c64;
          System_Text_StringBuilder__Append(plVar2,*(undefined1 *)(lVar3 + (int)uVar9 + 0x20),0);
          uVar9 = uVar9 + 2;
          lVar3 = Mono_Security_ASN1__get_Value(lVar4);
          if (lVar3 == 0) goto LAB_073f9c64;
        }
        if (plVar2 == (long *)0x0) goto LAB_073f9c64;
        lVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      }
      uVar6 = FUN_03f5c394(DAT_0917fcc8,9);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar6,DAT_091f3b10,0);
      if ((param_3 & 1) != 0) {
        if (lVar3 == 0) goto LAB_073f9c64;
        iVar1 = System_String__IndexOfAny(lVar3,uVar6,0,*(undefined4 *)(lVar3 + 0x10),0);
        if (((0 < iVar1) ||
            (uVar5 = System_String__StartsWith(lVar3,DAT_091f5a98,0), (uVar5 & 1) != 0)) ||
           (uVar5 = System_String__EndsWith(lVar3,DAT_091f5a98,0), (uVar5 & 1) != 0)) {
          uVar6 = System_String__Replace(lVar3,DAT_091f6d50,DAT_091f5700,0);
          lVar3 = System_String__Concat(DAT_091f6d50,uVar6,DAT_091f6d50,0);
        }
      }
      if (param_1 == 0) goto LAB_073f9c64;
      System_Text_StringBuilder__Append(param_1,lVar3,0);
      plVar2 = *(long **)(param_2 + 0x20);
      iVar1 = 0;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
      }
      if (iVar8 < iVar1 + -1) {
        System_Text_StringBuilder__Append(param_1,DAT_091f86e8,0);
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

