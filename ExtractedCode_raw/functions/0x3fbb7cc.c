// rea decompile_all
// name: FUN_03fbb7cc
// address: 0x3fbb7cc
// body: available
// range: 0x3fbb7cc-0x3fbc633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fbb7cc(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  void *local_68 [2];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  undefined1 auStack_38 [8];
  
  FUN_03f5d894(auStack_38,&DAT_095356e0);
  iVar2 = DAT_09535798 + 1;
  bVar1 = DAT_09535798 < 1;
  DAT_09535798 = iVar2;
  if (bVar1) {
    FUN_03fadee0();
    FUN_03f5c2c8();
    FUN_03f64da0();
    FUN_03fbe51c();
    FUN_03fa7fc8();
    FUN_03f66afc();
    FUN_03f877bc();
    FUN_03f5c2c8();
    FUN_03fa7e30();
    DAT_095357a0 = &UNK_01a39d19;
    FUN_03f8eea0();
    FUN_03f86d6c();
    (*(code *)PTR_LAB_0906e170)();
    uVar3 = FUN_03fc1f80();
    if ((uVar3 & 1) == 0) {
      uVar7 = 0;
      DAT_09535798 = DAT_09535798 + -1;
      goto LAB_03fbb80c;
    }
    FUN_03f5c2c8();
    FUN_03f5d300();
    FUN_03fae988();
    FUN_03f912bc(malloc,free);
    memset(&DAT_095353d8,0,0x300);
    uVar7 = FUN_03f98818("mscorlib.dll");
    uVar4 = FUN_03f98818("__Generated");
    DAT_095353d8 = FUN_03f98700(uVar7);
    uRam00000000095353e0 = FUN_03f98700(uVar4);
    DAT_095353e8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Object");
    DAT_095353f8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a7e340);
    DAT_09535400 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Boolean");
    DAT_095353f0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a6ae85);
    DAT_09535408 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","SByte");
    DAT_09535410 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Int16");
    DAT_09535418 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a6586a);
    DAT_09535420 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Int32");
    DAT_09535428 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a56f23);
    DAT_09535438 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a706d3);
    DAT_09535430 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a4e462);
    DAT_09535440 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a83f76);
    DAT_09535448 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a6ae90);
    DAT_09535450 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Single");
    DAT_09535458 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Double");
    DAT_09535460 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a3f3e0);
    DAT_09535468 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","String");
    DAT_09535470 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a757bb);
    DAT_09535478 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Array");
    DAT_09535628 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","ValueType");
    DAT_09535480 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Delegate");
    DAT_09535488 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","MulticastDelegate");
    DAT_09535490 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Runtime.Remoting.Messaging","AsyncResult"
                                     );
    DAT_095355c0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","MonoAsyncCall");
    DAT_09535498 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Threading","ManualResetEvent");
    DAT_095354b8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&DAT_01a89dc9);
    DAT_095354c0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","MonoType");
    DAT_095354d8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Threading","Thread");
    DAT_095354e0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Threading","InternalThread");
    DAT_09535578 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","RuntimeType");
    DAT_095354e8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","AppDomain");
    uRam00000000095354f0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","AppDomainSetup");
    DAT_095354f8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","MemberInfo");
    DAT_09535500 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","FieldInfo");
    DAT_09535508 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","MethodInfo");
    DAT_09535510 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","PropertyInfo");
    DAT_09535518 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","EventInfo");
    uRam0000000009535520 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Text","StringBuilder");
    DAT_09535528 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Diagnostics","StackFrame");
    uRam0000000009535530 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Diagnostics","StackTrace");
    DAT_09535540 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","TypedReference");
    DAT_09535550 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Collections.Generic",&UNK_01a67e4d);
    DAT_09535558 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Collections.Generic","ICollection`1");
    DAT_09535560 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Collections.Generic","IEnumerable`1");
    DAT_09535568 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Collections.Generic","IReadOnlyList`1");
    DAT_09535570 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Collections.Generic",
                                      "IReadOnlyCollection`1");
    DAT_09535580 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Nullable`1");
    uRam00000000095355b0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Version");
    DAT_095355b8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Globalization","CultureInfo");
    DAT_095355c8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","RuntimeAssembly");
    uRam00000000095355d0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","AssemblyName");
    DAT_095355d8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","RuntimeParameterInfo");
    DAT_095355e0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","RuntimeModule");
    uRam00000000095354c8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Exception");
    uRam00000000095355e8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","SystemException");
    uRam00000000095355f0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","ArgumentException");
    uRam0000000009535548 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","MarshalByRefObject");
    uRam0000000009535588 = thunk_FUN_03fb4f8c(uRam00000000095353e0,"System","__Il2CppComObject");
    uRam0000000009535600 =
         thunk_FUN_03fb4f8c(DAT_095353d8,"System.Runtime.InteropServices","SafeHandle");
    uRam0000000009535608 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Globalization","SortKey");
    DAT_09535610 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a337bb);
    uRam0000000009535618 =
         thunk_FUN_03fb4f8c(DAT_095353d8,"System.Runtime.InteropServices","ErrorWrapper");
    DAT_09535620 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","Missing");
    DAT_09535590 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Attribute");
    DAT_09535598 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","CustomAttributeData");
    DAT_095355a0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection",
                                      "CustomAttributeTypedArgument");
    DAT_095355a8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection",
                                      "CustomAttributeNamedArgument");
    uRam0000000009535660 =
         thunk_FUN_03fb4f8c(DAT_095353d8,"System.Collections.Generic","KeyValuePair`2");
    uRam0000000009535680 = thunk_FUN_03fb4f8c(DAT_095353d8,"System",&UNK_01a4258e);
    uRam0000000009535630 =
         thunk_FUN_03fb4f8c(DAT_095353d8,"System.Threading","_ThreadPoolWaitCallback");
    DAT_09535640 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Runtime.Remoting.Messaging",
                                      "MonoMethodMessage");
    uRam0000000009535638 = FUN_03fbef44(uRam0000000009535630,"PerformWaitCallback",0);
    DAT_09535688 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","SByteEnum");
    DAT_09535690 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Int16Enum");
    DAT_09535698 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Int32Enum");
    DAT_095356a0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","Int64Enum");
    DAT_095356a8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","ByteEnum");
    DAT_095356b0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","UInt16Enum");
    DAT_095356b8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","UInt32Enum");
    DAT_095356c0 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","UInt64Enum");
    DAT_095356c8 = thunk_FUN_03fb4f8c(uRam00000000095353e0,"Unity.IL2CPP.Metadata",
                                      "__Il2CppFullySharedGenericType");
    DAT_095356d0 = thunk_FUN_03fb4f8c(uRam00000000095353e0,"Unity.IL2CPP.Metadata",
                                      "__Il2CppFullySharedGenericStructType");
    FUN_03f5c2c8();
    FUN_03f9cc70();
    FUN_03fb4e34(DAT_095353d8);
    lVar5 = FUN_03f98818("System");
    if (lVar5 != 0) {
      uVar7 = FUN_03f98700();
      DAT_09535678 = thunk_FUN_03fb4f8c(uVar7,"System",&UNK_01a425a5);
    }
    lVar5 = FUN_03f98818("WindowsRuntimeMetadata");
    if (lVar5 != 0) {
      uVar7 = FUN_03f98700();
      uRam0000000009535648 = thunk_FUN_03fb4f8c(uVar7,"Windows.Foundation","IReference`1");
      uRam0000000009535650 = thunk_FUN_03fb4f8c(uVar7,"Windows.Foundation","IReferenceArray`1");
      uRam0000000009535658 =
           thunk_FUN_03fb4f8c(uVar7,"Windows.Foundation.Collections","IKeyValuePair`2");
      uRam0000000009535658 =
           thunk_FUN_03fb4f8c(uVar7,"Windows.Foundation.Collections","IKeyValuePair`2");
      DAT_09535668 = thunk_FUN_03fb4f8c(uVar7,"Windows.Foundation",&UNK_01a425a5);
      uRam0000000009535670 = thunk_FUN_03fb4f8c(uVar7,"Windows.Foundation","IUriRuntimeClass");
    }
    FUN_03fbea4c(DAT_09535468);
    FUN_03f69c28();
    lVar5 = FUN_03faa758();
    FUN_03fae8d4();
    FUN_03faf458();
    uVar7 = thunk_FUN_03f9944c(uRam00000000095354f0);
    lVar6 = thunk_FUN_03f9944c(DAT_095354e8);
    FUN_03f5ef9c(lVar6 + 0x18,lVar5);
    FUN_03f5ef9c(lVar5,lVar6);
    FUN_03f5ef9c(lVar5 + 8,uVar7);
    *(undefined4 *)(lVar5 + 0x28) = 1;
    uVar7 = FUN_03fbb708(param_1);
    *(undefined8 *)(lVar5 + 0x20) = uVar7;
    FUN_03facf24();
    FUN_03f5e840();
    FUN_03fc27e0();
    FUN_03f96708(DAT_09535468);
    FUN_03fbea4c(DAT_09535468);
    uVar7 = FUN_03fbeccc(DAT_09535468,"Empty");
    uVar4 = FUN_03f96754();
    FUN_03fbb424(uVar7,uVar4);
    uRam00000000095356d8 = 1;
    FUN_03f6321c(local_50,"MONO_REFLECTION_SERIALIZER");
    FUN_03f6321c(local_68,&UNK_01a51306);
    FUN_03f8eb5c(local_50,local_68);
    if (((ulong)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    FUN_03f6321c(local_50,"MONO_XMLSERIALIZER_THS");
    FUN_03f6321c(local_68,&UNK_01a706ef);
    FUN_03f8eb5c(local_50,local_68);
    if (((ulong)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    FUN_03faa7b0(lVar5);
    FUN_03faa7f8(*(undefined8 *)(lVar5 + 0x10));
    FUN_03f8f15c(local_50);
    FUN_03fbc6b8(local_50);
    iVar2 = FUN_03f92378();
    if (iVar2 == 0) {
      local_68[0] = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        local_68[0] = local_40;
      }
      FUN_03f921e4(local_68,1);
    }
    FUN_03fc2498();
    FUN_03fc2518();
    FUN_03f93a50();
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  uVar7 = 1;
LAB_03fbb80c:
  FUN_03f5d920(auStack_38);
  return uVar7;
}

