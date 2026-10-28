// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$.cctor
// address: 0x76aa910
// body: available
// range: 0x76aa910-0x76aae33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76aae1c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76aae20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76aae2c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76aae30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_DefaultContractResolver___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_09522642 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c10);
    FUN_03f5c2a4(&DAT_09182000);
    FUN_03f5c2a4(&DAT_091832c0);
    FUN_03f5c2a4(&DAT_091832f0);
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_09183ba8);
    FUN_03f5c2a4(&DAT_09184078);
    FUN_03f5c2a4(&DAT_09184380);
    FUN_03f5c2a4(&DAT_09180208);
    FUN_03f5c2a4(&DAT_09187528);
    FUN_03f5c2a4(&DAT_09189dd0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918d620);
    FUN_03f5c2a4(&DAT_0920e0b0);
    FUN_03f5c2a4(&DAT_0920e0b8);
    FUN_03f5c2a4(&DAT_0920e0c0);
    DAT_09522642 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09183878);
  Newtonsoft_Json_Serialization_DefaultContractResolver___ctor();
  **(undefined8 **)(DAT_09183878 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183878 + 0xb8),uVar1);
  lVar2 = FUN_03f5c394(DAT_091805f8,3);
  if (lVar2 == 0) {
LAB_076aae30:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = DAT_0920e0b8;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20));
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar2 + 0x28) = DAT_0920e0c0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28));
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = DAT_0920e0b0;
        thunk_FUN_03f5d7b8();
        plVar3 = (long *)(*(long *)(DAT_09183878 + 0xb8) + 8);
        *plVar3 = lVar2;
        thunk_FUN_03f5d7b8(plVar3,lVar2);
        plVar3 = (long *)FUN_03f5c394(DAT_09180208,10);
        lVar2 = thunk_FUN_03f9944c(DAT_09184078);
        Newtonsoft_Json_Converters_EntityKeyMemberConverter___ctor(lVar2,0);
        if (plVar3 == (long *)0x0) goto LAB_076aae30;
        if ((lVar2 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_076aae24:
          uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar1,0);
        }
        if ((int)plVar3[3] != 0) {
          plVar3[4] = lVar2;
          thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
          lVar2 = thunk_FUN_03f9944c(DAT_09184380);
          Newtonsoft_Json_Converters_ExpandoObjectConverter___ctor(lVar2,0);
          if ((lVar2 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_076aae24;
          if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
            plVar3[5] = lVar2;
            thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
            lVar2 = thunk_FUN_03f9944c(DAT_0918d620);
            Newtonsoft_Json_Converters_XmlNodeConverter___ctor(lVar2,0);
            if ((lVar2 != 0) &&
               (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_076aae24;
            if (2 < *(uint *)(plVar3 + 3)) {
              plVar3[6] = lVar2;
              thunk_FUN_03f5d7b8(plVar3 + 6,lVar2);
              lVar2 = thunk_FUN_03f9944c(DAT_09181c10);
              Newtonsoft_Json_Converters_BinaryConverter___ctor(lVar2,0);
              if ((lVar2 != 0) &&
                 (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_076aae24;
              if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
                plVar3[7] = lVar2;
                thunk_FUN_03f5d7b8(plVar3 + 7,lVar2);
                lVar2 = thunk_FUN_03f9944c(DAT_091832c0);
                Newtonsoft_Json_Converters_DataSetConverter___ctor(lVar2,0);
                if ((lVar2 != 0) &&
                   (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                goto LAB_076aae24;
                if (4 < *(uint *)(plVar3 + 3)) {
                  plVar3[8] = lVar2;
                  thunk_FUN_03f5d7b8(plVar3 + 8,lVar2);
                  lVar2 = thunk_FUN_03f9944c(DAT_091832f0);
                  Newtonsoft_Json_Converters_DataTableConverter___ctor(lVar2,0);
                  if ((lVar2 != 0) &&
                     (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)
                     ) goto LAB_076aae24;
                  if (5 < *(uint *)(plVar3 + 3)) {
                    plVar3[9] = lVar2;
                    thunk_FUN_03f5d7b8(plVar3 + 9,lVar2);
                    lVar2 = thunk_FUN_03f9944c(DAT_09183ba8);
                    Newtonsoft_Json_Converters_DiscriminatedUnionConverter___ctor(lVar2,0);
                    if ((lVar2 != 0) &&
                       (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar4 == 0)) goto LAB_076aae24;
                    if (6 < *(uint *)(plVar3 + 3)) {
                      plVar3[10] = lVar2;
                      thunk_FUN_03f5d7b8(plVar3 + 10,lVar2);
                      lVar2 = thunk_FUN_03f9944c(DAT_09187528);
                      Newtonsoft_Json_Converters_KeyValuePairConverter___ctor(lVar2,0);
                      if ((lVar2 != 0) &&
                         (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar4 == 0)) goto LAB_076aae24;
                      if ((*(uint *)(plVar3 + 3) & 0xfffffff8) != 0) {
                        plVar3[0xb] = lVar2;
                        thunk_FUN_03f5d7b8(plVar3 + 0xb,lVar2);
                        lVar2 = thunk_FUN_03f9944c(DAT_09182000);
                        Newtonsoft_Json_Converters_BsonObjectIdConverter___ctor(lVar2,0);
                        if ((lVar2 != 0) &&
                           (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar4 == 0)) goto LAB_076aae24;
                        if (8 < *(uint *)(plVar3 + 3)) {
                          plVar3[0xc] = lVar2;
                          thunk_FUN_03f5d7b8(plVar3 + 0xc,lVar2);
                          lVar2 = thunk_FUN_03f9944c(DAT_09189dd0);
                          Newtonsoft_Json_Converters_RegexConverter___ctor(lVar2,0);
                          if ((lVar2 != 0) &&
                             (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)),
                             lVar4 == 0)) goto LAB_076aae24;
                          if (9 < *(uint *)(plVar3 + 3)) {
                            plVar3[0xd] = lVar2;
                            thunk_FUN_03f5d7b8(plVar3 + 0xd,lVar2);
                            plVar5 = (long *)(*(long *)(DAT_09183878 + 0xb8) + 0x10);
                            *plVar5 = (long)plVar3;
                            thunk_FUN_03f5d7b8(plVar5,plVar3);
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
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

