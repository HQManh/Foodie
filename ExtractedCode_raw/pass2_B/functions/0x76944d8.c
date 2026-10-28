// rea decompile_all
// name: Newtonsoft.Json.Utilities.ImmutableCollectionsUtils$$.cctor
// address: 0x76944d8
// body: available
// range: 0x76944d8-0x7694d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7694d98 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7694d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ImmutableCollectionsUtils___cctor(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_095225b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091915c8);
    FUN_03f5c2a4(&DAT_09186af8);
    FUN_03f5c2a4(&DAT_091b3008);
    FUN_03f5c2a4(&DAT_091b3000);
    FUN_03f5c2a4(&DAT_0917d4e0);
    FUN_03f5c2a4(&DAT_0920dff8);
    FUN_03f5c2a4(&DAT_0920e030);
    FUN_03f5c2a4(&DAT_0920e018);
    FUN_03f5c2a4(&DAT_0920dfb8);
    FUN_03f5c2a4(&DAT_0920dfc8);
    FUN_03f5c2a4(&DAT_0920dfd8);
    FUN_03f5c2a4(&DAT_0920dfa8);
    FUN_03f5c2a4(&DAT_0920dfc0);
    FUN_03f5c2a4(&DAT_0920dfe0);
    FUN_03f5c2a4(&DAT_0920df98);
    FUN_03f5c2a4(&DAT_0920e020);
    FUN_03f5c2a4(&DAT_0920e028);
    FUN_03f5c2a4(&DAT_0920e010);
    FUN_03f5c2a4(&DAT_0920dfd0);
    FUN_03f5c2a4(&DAT_0920e008);
    FUN_03f5c2a4(&DAT_0920dfe8);
    FUN_03f5c2a4(&DAT_0920e000);
    FUN_03f5c2a4(&DAT_0920dfa0);
    FUN_03f5c2a4(&DAT_0920dfb0);
    FUN_03f5c2a4(&DAT_0920dff0);
    FUN_03f5c2a4(&DAT_0920e038);
    DAT_095225b5 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917d4e0);
  FUN_057e0400(lVar3,DAT_091b3000);
  uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
  Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
            (uVar4,DAT_0920dfa0,DAT_0920dff8,DAT_0920dff0);
  lVar2 = DAT_091b3008;
  if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar5 = uVar4;
        thunk_FUN_03f5d7b8(puVar5,uVar4);
      }
      else {
        FUN_057e0c68(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
      Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                (uVar4,DAT_0920dff8,DAT_0920dff8,DAT_0920dff0);
      lVar2 = DAT_091b3008;
      lVar7 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *puVar5 = uVar4;
          thunk_FUN_03f5d7b8(puVar5,uVar4);
        }
        else {
          FUN_057e0c68(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
        }
        uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
        Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                  (uVar4,DAT_0920dfa8,DAT_0920e008,DAT_0920e000);
        lVar2 = DAT_091b3008;
        lVar7 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *puVar5 = uVar4;
            thunk_FUN_03f5d7b8(puVar5,uVar4);
          }
          else {
            FUN_057e0c68(lVar3,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
          Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                    (uVar4,DAT_0920e008,DAT_0920e008,DAT_0920e000);
          lVar2 = DAT_091b3008;
          lVar7 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *puVar5 = uVar4;
              thunk_FUN_03f5d7b8(puVar5,uVar4);
            }
            else {
              FUN_057e0c68(lVar3,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
            Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                      (uVar4,DAT_0920dfb8,DAT_0920e038,DAT_0920e030);
            lVar2 = DAT_091b3008;
            lVar7 = *(long *)(lVar3 + 0x10);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                *puVar5 = uVar4;
                thunk_FUN_03f5d7b8(puVar5,uVar4);
              }
              else {
                FUN_057e0c68(lVar3,uVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
              Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                        (uVar4,DAT_0920e038,DAT_0920e038,DAT_0920e030);
              lVar2 = DAT_091b3008;
              lVar7 = *(long *)(lVar3 + 0x10);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar3 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                  puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar5 = uVar4;
                  thunk_FUN_03f5d7b8(puVar5,uVar4);
                }
                else {
                  FUN_057e0c68(lVar3,uVar4,
                               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
                Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                          (uVar4,DAT_0920dfb0,DAT_0920dfe8,DAT_0920dfe0);
                lVar2 = DAT_091b3008;
                lVar7 = *(long *)(lVar3 + 0x10);
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                    *puVar5 = uVar4;
                    thunk_FUN_03f5d7b8(puVar5,uVar4);
                  }
                  else {
                    FUN_057e0c68(lVar3,uVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
                  Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                            (uVar4,DAT_0920e028,DAT_0920e028,DAT_0920e020);
                  lVar2 = DAT_091b3008;
                  lVar7 = *(long *)(lVar3 + 0x10);
                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                  if (lVar7 != 0) {
                    uVar1 = *(uint *)(lVar3 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                      puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar5 = uVar4;
                      thunk_FUN_03f5d7b8(puVar5,uVar4);
                    }
                    else {
                      FUN_057e0c68(lVar3,uVar4,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
                    Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                              (uVar4,DAT_0920dfe8,DAT_0920dfe8,DAT_0920dfe0);
                    lVar2 = DAT_091b3008;
                    lVar7 = *(long *)(lVar3 + 0x10);
                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar3 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                        puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                        *puVar5 = uVar4;
                        thunk_FUN_03f5d7b8(puVar5,uVar4);
                      }
                      else {
                        FUN_057e0c68(lVar3,uVar4,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
                      Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                                (uVar4,DAT_0920dfc8,DAT_0920dfc8,DAT_0920dfc0);
                      lVar2 = DAT_091b3008;
                      lVar7 = *(long *)(lVar3 + 0x10);
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar7 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                          *puVar5 = uVar4;
                          thunk_FUN_03f5d7b8(puVar5,uVar4);
                        }
                        else {
                          FUN_057e0c68(lVar3,uVar4,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                        }
                        **(long **)(DAT_09186af8 + 0xb8) = lVar3;
                        thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09186af8 + 0xb8),lVar3);
                        lVar3 = thunk_FUN_03f9944c(DAT_0917d4e0);
                        FUN_057e0400(lVar3,DAT_091b3000);
                        uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
                        Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                                  (uVar4,DAT_0920df98,DAT_0920dfd8,DAT_0920dfd0);
                        lVar2 = DAT_091b3008;
                        if (lVar3 != 0) {
                          lVar7 = *(long *)(lVar3 + 0x10);
                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                          if (lVar7 != 0) {
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                              *puVar5 = uVar4;
                              thunk_FUN_03f5d7b8(puVar5,uVar4);
                            }
                            else {
                              FUN_057e0c68(lVar3,uVar4,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                            }
                            uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
                            Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                                      (uVar4,DAT_0920e018,DAT_0920e018,DAT_0920e010);
                            lVar2 = DAT_091b3008;
                            lVar7 = *(long *)(lVar3 + 0x10);
                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar3 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                                *puVar5 = uVar4;
                                thunk_FUN_03f5d7b8(puVar5,uVar4);
                              }
                              else {
                                FUN_057e0c68(lVar3,uVar4,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                              }
                              uVar4 = thunk_FUN_03f9944c(DAT_091915c8);
                              Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo___ctor
                                        (uVar4,DAT_0920dfd8,DAT_0920dfd8,DAT_0920dfd0);
                              lVar2 = DAT_091b3008;
                              lVar7 = *(long *)(lVar3 + 0x10);
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar7 != 0) {
                                uVar1 = *(uint *)(lVar3 + 0x18);
                                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                  puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                                  *puVar5 = uVar4;
                                  thunk_FUN_03f5d7b8(puVar5,uVar4);
                                }
                                else {
                                  FUN_057e0c68(lVar3,uVar4,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                                }
                                plVar6 = (long *)(*(long *)(DAT_09186af8 + 0xb8) + 8);
                                *plVar6 = lVar3;
                                thunk_FUN_03f5d7b8(plVar6,lVar3);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

