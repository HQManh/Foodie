// rea decompile_all
// name: System.Globalization.CultureData$$get_Invariant
// address: 0x7537a54
// body: available
// range: 0x7537a54-0x7537e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7537e0c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7537e10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7537e1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_CultureData__get_Invariant(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if ((DAT_095218d5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc98);
    FUN_03f5c2a4(&DAT_091822a0);
    FUN_03f5c2a4(&DAT_09182ff0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0921cb18);
    FUN_03f5c2a4(&DAT_09203b10);
    FUN_03f5c2a4(&DAT_091f9f58);
    FUN_03f5c2a4(&DAT_09203b20);
    FUN_03f5c2a4(&DAT_09203a60);
    FUN_03f5c2a4(&DAT_0921c8f8);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_091fb158);
    FUN_03f5c2a4(&DAT_0921dd30);
    FUN_03f5c2a4(&DAT_0920a108);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_095218d5 = 1;
  }
  if (**(long **)(DAT_09182ff0 + 0xb8) != 0) {
    return **(long **)(DAT_09182ff0 + 0xb8);
  }
  lVar1 = thunk_FUN_03f9944c();
  uVar3 = DAT_091f5700;
  System_Object___ctor(lVar1,0);
  *(undefined8 *)(lVar1 + 0x58) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58),uVar3);
  *(undefined8 *)(lVar1 + 0x50) = DAT_0921dd30;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(lVar1 + 0x10) = DAT_091fb158;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(lVar1 + 0x18) = DAT_0920a108;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(lVar1 + 0x20) = DAT_091f9f58;
  thunk_FUN_03f5d7b8();
  lVar2 = FUN_03f5c394(DAT_091805f8,1);
  if (lVar2 == 0) {
LAB_07537e10:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = DAT_09203b20;
    thunk_FUN_03f5d7b8();
    thunk_FUN_03f6a5cc();
    *(long *)(lVar1 + 0x28) = lVar2;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x28),lVar2);
    lVar2 = FUN_03f5c394(DAT_091805f8,4);
    if (lVar2 == 0) goto LAB_07537e10;
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = DAT_09203b10;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = DAT_0921cb18;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = DAT_09203a60;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x30));
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = DAT_0921c8f8;
            thunk_FUN_03f5d7b8();
            thunk_FUN_03f6a5cc();
            *(long *)(lVar1 + 0x30) = lVar2;
            thunk_FUN_03f5d7b8((long *)(lVar1 + 0x30),lVar2);
            *(undefined8 *)(lVar1 + 0x38) = 0;
            lVar2 = FUN_03f5c394(DAT_091801b8,1);
            if (lVar2 == 0) goto LAB_07537e10;
            if (*(int *)(lVar2 + 0x18) != 0) {
              *(undefined4 *)(lVar2 + 0x20) = 1;
              thunk_FUN_03f6a5cc();
              *(long *)(lVar1 + 0x40) = lVar2;
              thunk_FUN_03f5d7b8((long *)(lVar1 + 0x40),lVar2);
              uVar3 = FUN_03f5c394(DAT_0917fc98,0x17);
              puVar5 = (undefined8 *)(lVar1 + 0x48);
              *puVar5 = uVar3;
              thunk_FUN_03f5d7b8(puVar5,uVar3);
              plVar6 = (long *)*puVar5;
              if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (plVar6 == (long *)0x0) goto LAB_07537e10;
              lVar2 = **(long **)(DAT_091822a0 + 0xb8);
              if ((lVar2 != 0) &&
                 (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
                uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar3,0);
              }
              if ((int)plVar6[3] != 0) {
                plVar6[4] = lVar2;
                thunk_FUN_03f5d7b8(plVar6 + 4,lVar2);
                uVar3 = DAT_091f86d8;
                *(undefined8 *)(lVar1 + 0x74) = 0x2500002710;
                *(undefined8 *)(lVar1 + 0x6c) = 0x1b5000004e4;
                *(undefined8 *)(lVar1 + 0x80) = uVar3;
                thunk_FUN_03f5d7b8();
                FUN_03f955cc(*(undefined8 *)(DAT_09182ff0 + 0xb8),lVar1,0);
                return **(long **)(DAT_09182ff0 + 0xb8);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

