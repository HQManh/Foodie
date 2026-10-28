// rea decompile_all
// name: MessagePack.Resolvers.ExpandoObjectResolver$$.cctor
// address: 0x73ab69c
// body: available
// range: 0x73ab69c-0x73ab98f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ab978 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73ab97c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ab980 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ab98c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Resolvers_ExpandoObjectResolver___cctor(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((DAT_09520bb0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182098);
    FUN_03f5c2a4(&DAT_091828a8);
    FUN_03f5c2a4(&DAT_09184388);
    FUN_03f5c2a4(&DAT_09184390);
    FUN_03f5c2a4(&DAT_091800b0);
    FUN_03f5c2a4(&DAT_091800b8);
    FUN_03f5c2a4(&DAT_09188178);
    FUN_03f5c2a4(&DAT_09188190);
    FUN_03f5c2a4(&DAT_091907e8);
    DAT_09520bb0 = 1;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_091800b8,2);
  if (*(int *)(DAT_09184388 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09184388);
  }
  if (plVar1 == (long *)0x0) goto LAB_073ab97c;
  lVar6 = **(long **)(DAT_09184388 + 0xb8);
  if ((lVar6 != 0) &&
     (lVar2 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_073ab984:
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar6;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar6);
    lVar6 = thunk_FUN_03f9944c(DAT_091907e8);
    MessagePack_Resolvers_ExpandoObjectResolver_PrimitiveObjectWithExpandoMaps___ctor();
    if ((lVar6 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
    goto LAB_073ab984;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = lVar6;
      thunk_FUN_03f5d7b8(plVar1 + 5,lVar6);
      plVar3 = (long *)FUN_03f5c394(DAT_091800b0,1);
      if (*(int *)(DAT_09182098 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182098);
      }
      if (plVar3 != (long *)0x0) {
        lVar6 = **(long **)(DAT_09182098 + 0xb8);
        if ((lVar6 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
        goto LAB_073ab984;
        if ((int)plVar3[3] == 0) goto LAB_073ab980;
        plVar3[4] = lVar6;
        thunk_FUN_03f5d7b8(plVar3 + 4,lVar6);
        if (*(int *)(DAT_091828a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = MessagePack_Resolvers_CompositeResolver__Create(plVar1,plVar3);
        **(undefined8 **)(DAT_09184390 + 0xb8) = uVar4;
        thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09184390 + 0xb8),uVar4);
        if (*(int *)(DAT_09188190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09520b32 == '\0') {
          FUN_03f5c2a4(&DAT_091928e0);
          DAT_09520b32 = '\x01';
        }
        if (*(int *)(DAT_091928e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = **(long **)(DAT_091928e0 + 0xb8);
        if (*(int *)(DAT_09188178 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188178);
        }
        if ((lVar6 != 0) &&
           (lVar6 = MessagePack_MessagePackSerializerOptions__WithSecurity
                              (lVar6,*(undefined8 *)(*(long *)(DAT_09188178 + 0xb8) + 8),0),
           lVar6 != 0)) {
          uVar4 = MessagePack_MessagePackSerializerOptions__WithResolver
                            (lVar6,**(undefined8 **)(DAT_09184390 + 0xb8),0);
          puVar5 = (undefined8 *)(*(long *)(DAT_09184390 + 0xb8) + 8);
          *puVar5 = uVar4;
          thunk_FUN_03f5d7b8(puVar5,uVar4);
          return;
        }
      }
LAB_073ab97c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_073ab980:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

