// rea decompile_all
// name: MessagePack.MessagePackSerializer.CompiledMethods.<>c$$<.ctor>b__14_4
// address: 0x7399d4c
// body: available
// range: 0x7399d4c-0x7399d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackSerializer_CompiledMethods_<>c__<_ctor>b__14_4
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_58;
  
  MessagePack_MessagePackSerializer_CompiledMethods__ThrowRefStructNotSupported();
  auVar6 = MessagePack_MessagePackSerializer_CompiledMethods__ThrowRefStructNotSupported();
  lVar3 = auVar6._8_8_;
  if ((DAT_09520b0e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09520b0e = 1;
  }
  lVar5 = *(long *)(auVar6._0_8_ + 0x10);
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,3);
  if (plVar1 == (long *)0x0) {
LAB_07399ed8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar3 != 0) &&
     (lVar2 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_07399edc:
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar3);
    if ((param_3 != 0) &&
       (lVar3 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07399edc;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = param_3;
      thunk_FUN_03f5d7b8(plVar1 + 5,param_3);
      uStack_58 = param_4;
      lVar3 = FUN_03f5c42c(DAT_09182348,&uStack_58);
      if ((lVar3 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
      goto LAB_07399edc;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar3;
        thunk_FUN_03f5d7b8(plVar1 + 6,lVar3);
        if (lVar5 != 0) {
          lVar3 = System_Reflection_MethodBase__Invoke(lVar5,0,plVar1,0);
          uVar4 = DAT_0917fc88;
          if (lVar3 != 0) {
            lVar5 = thunk_FUN_03f99350(lVar3,DAT_0917fc88);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(lVar3,uVar4);
            }
          }
          return;
        }
        goto LAB_07399ed8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

